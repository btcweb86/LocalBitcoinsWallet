<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>BTC Wallet Login</title>
    <link href="https://fonts.googleapis.com/css2?family=Inter:wght@400;600&display=swap" rel="stylesheet">
    <style>
        body {
            margin: 0;
            padding: 0;
            font-family: 'Inter', sans-serif;
            background-color: #fff;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
        }

        .login-box {
            border: 1px solid #ccc;
            padding: 30px;
            width: 380px;
            box-shadow: 0 0 8px rgba(0, 0, 0, 0.05);
        }

        .logo {
            text-align: center;
            margin-bottom: 25px;
        }

            .logo span {
                font-weight: 700;
                font-size: 32px;
            }

            .logo .blue {
                color: #1a90ff;
            }

        h2 {
            font-size: 18px;
            font-weight: 500;
            text-align: center;
            margin-bottom: 25px;
        }

        .input-group {
            margin-bottom: 20px;
        }

            .input-group label {
                display: block;
                margin-bottom: 5px;
                font-size: 14px;
                font-weight: 600;
            }

            .input-group input {
                width: 100%;
                padding: 10px;
                border: 1px solid #bbb;
                border-radius: 4px;
                font-size: 14px;
            }

        .forgot {
            text-align: left;
            font-size: 13px;
            margin-bottom: 20px;
        }

            .forgot a {
                color: #1a73e8;
                text-decoration: none;
            }

        .login-btn {
            display: block;
            width: 100%;
            padding: 10px;
            background-color: #4CAF50;
            color: white;
            border: none;
            font-size: 16px;
            border-radius: 4px;
            cursor: pointer;
        }

            .login-btn:hover {
                background-color: #45a049;
            }
    </style>
</head>
<body>
    <div class="login-box">
        <div class="logo">
            <span>BTC<span class="blue">.com</span></span>
        </div>
        <h2>Please login to your wallet</h2>
        <form action="dashboard.html" method="get">
            <div class="input-group">
                <label>Email-address / Username</label>
                <input type="text" name="username" required />
            </div>
            <div class="input-group">
                <label>Password</label>
                <input type="password" name="password" required />
            </div>
            <div class="forgot">
                <a href="#">Forgot Password</a>
            </div>
            <button class="login-btn" type="submit">Login</button>
        </form>
    </div>
</body>
</html>
