# Kernel_Linux_Module INFORMACION:


Este modulo, esta creado con fines educativos.
Este projecto esta creado para el aprendizaje interno de los modulos de Linux, en su ultima version de kernel.

# REQUISITOS:

Deberemos tener la libreria libelf-dev instalada en nuestro equipo, en caso de que no lo tengamos deberemos escribir lo siguiente:
    
    root>> apt install libelf-dev

Una vez instalado podremos continuar con la instalacion del modulo



# Instrucciones de INSTALACIÓN:

Para la instalacion del modulo, tendremos que situarnos en la carpeta donde se encuentre el archivo *MAKEFILE* y el *MODULO*
En este caso nuestro modulo se llama *CORE0XF0013.c*

Ejecutaremos los siguientes comandos:

    root>> make
    root>> insmod ./Core0xF0013.ko
    
Ahora para comprobar que el modulo se ha cargado con exito ejecutaremos el siguiente comando:

    root>> lsmod

Ahora para poder visualizar los mensajes que nos ha monstrado el modulo ejecutaremos el siguiente comando:

    root>> dmesg

Si ya queremos eliminar/desactivar el modulo deberemos ejecutar el comando:
    
    root>> rmmod Core0xF0013
    
Si queremos tambien eliminar todo el modulo al completo eliminamos todo los archivos que nos ha creado al ejecutar el comando *make*
