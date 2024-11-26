# Minitalk

### 🏆 **42 Project**

**Minitalk** es un proyecto diseñado para demostrar habilidades en comunicación entre procesos utilizando señales de UNIX. Implementa un sistema de cliente-servidor en el que el cliente envía mensajes al servidor, que luego los muestra en la salida estándar.

---

## 🎯 **Objetivo del proyecto**

El objetivo principal de este proyecto es crear un programa cliente-servidor que utilice señales para intercambiar datos. El cliente transmite un mensaje de texto al servidor, que reconstruye y muestra el mensaje con precisión.

---

## 🚀 **Características principales**

1. **Comunicación basada en señales:**
   - Uso de `SIGUSR1` y `SIGUSR2` para enviar y recibir datos bit a bit.
   
2. **Codificación ASCII:**
   - Permite la representación de texto alfanumérico, caracteres especiales y de control.

3. **Fiabilidad:**
   - Implementación robusta que asegura la transmisión correcta de datos bit a bit.

4. **Reconocimiento de mensajes (bonus):**
   - El servidor envía señales de confirmación al cliente para garantizar la recepción correcta.

---

## 📁 **Estructura del proyecto**

```bash
Minitalk/
├── client.c      # Código fuente del cliente
├── server.c      # Código fuente del servidor
├── Makefile      # Herramienta de compilación
├── libft/        # Biblioteca auxiliar (si es necesaria)
└── README.md     # Este documento
