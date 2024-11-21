/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpedrer <adpedrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:41:10 by adpedrer          #+#    #+#             */
/*   Updated: 2024/03/08 18:22:17 by adpedrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		count_tokens(const char *s, char c);
char	**free_result(int i, char **result);
char	**token_to_array(const char *s, char c, char **result);

int	count_tokens(const char *s, char c)
{
	int	num_tokens;
	int	i;

	num_tokens = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			num_tokens++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (num_tokens);
}
/*
	Recorre, todo el string "s"
	Al encontrarse el caracter delimitante "c", suma un token, 
	luego recorre la palabra ( recorre el string), hasta que 
	encuentre otro delimitador o se acabe la cadena, ademas
	si no cuenta token hasta que haya un caracter distinto a "c",
	impidiendo que que de errores al poner mas de 1 caracter delimitador.
*/

char	**token_to_array(const char *s, char c, char **result)
{
	int	index;
	int	token_size;
	int	i;

	i = 0;
	index = 0;
	while (i < count_tokens(s, c))
	{
		token_size = 0;
		while (s[index] != c && s[index] != '\0')
		{
			token_size++;
			index++;
		}
		if (index != 0 && s[index -1] != c && s[index -1] != '\0')
		{
			result[i] = (char *)malloc(sizeof(char) * (token_size + 1));
			if (result[i] == NULL)
				return (free_result(i, result));
			ft_strlcpy(result[i++], s + index - token_size, token_size + 1);
		}
		index++;
	}
	result[i] = NULL;
	return (result);
}

/*
	Mientras que haya tokens, los va a ir añadiendo a los respectivos
	sitios correspondientes haciendo un malloc de el tamaño a meter en el token, 
	Una vez entra en el bucle, cuenta el tamaño de la palabra,
	hace un malloc de la palabra, copia su longitud
	en el espacio adecuado dejando un NULL al final, 
	index siempre es la longitud de la frase de esta forma copia lo que debe.
*/

char	**free_result(int i, char **result)
{
	while (i >= 0)
	{
		free(result[i]);
		i--;
	}
	free(result);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		counter;

	if (s == NULL)
		return (NULL);
	counter = count_tokens(s, c);
	result = (char **)malloc(sizeof(char *) * (counter + 1));
	if (result == NULL)
		return (NULL);
	return (token_to_array(s, c, result));
}
/*
int	main(void)
{
    char	str[] = "olai-asd";
    char	**token = ft_split(str, '-');

    if	(token == NULL) {
		printf("Error al dividir la cadena en tokens.\n");
		return 1;
	}

    int	i = 0;
    while (token[i] != NULL) {
        printf("%s\n", token[i]);
        i++;
	}
	free_result(i, token);
	return 0;
}
*/
/*
	La funcion general simplemente separa los tokens de "s" 
	delimitados por el caracter "c".

	Split: Gestion de errores primaria, con la funcion COUNT_TOKENS,
	cuenta el numero de tokenes, los reserva con malloc, y devuelve 
	la funcion TOKEN_TO_ARRAY, con la memoria reservada.
*/