<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Fibonacci</title>
</head>
<body>
<form name="fibonacci_form">
    Number 1: <input id="first" type="number"><br>
    Number 2: <input id="second" type="number"><br>
    # of Series:<input id="second" type="noseries"><br>
    <button onClick="fibonacci()">Calculate</button>
</form>

    <script type="text/javascript">
        function fibonacci()
        {       
            num1 = document.getElementById('first').value;
            num2 = document.getElementById('second').value;
            next = 0;
            limit = 10;

            document.write(num1+', ');
            document.write(num2+', ');
 
            for(var i = 3; i <= limit; i++){
                next = Number(num1) + Number(num2) 
                num1 = num2;
                num2 = next;

                document.write(next+', ');
            }
        }
    </script>
</body>
</html>
