# English

We see in this code the vulnerable <strong>strcpy</strong> function. Let's compile the code with the /GS enabled.

<i>Input received : AAAAA</i>

Let's try to crash the application with the Python script <strong>Script.py</strong>

If we observe with Immunity Debugger the behavior of the program giving 520 arguments, we see that there is an access violation but we do not have a rewrite of the EIP register.

# Français

Nous voyons deans ce code la fonction vulnérable <strong>strcpy</strong>. Compilons le code avec le /GS activé.

<i>Input received : AAAAA</i>

Essayons de faire planter l'application grâce au script Python <strong>Script.py</strong>.

Si nous observons avec Immunity Debugger le comportement du programme en donnant 520 arguments, nous voyons qu'il y a une violation d'accès mais nous n'avons pas une réécriture du registre EIP.
