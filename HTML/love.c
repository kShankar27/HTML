<!DOCTYPE html>
<html>
    <head>
        <style>
            *{
                margin: 0%;
                padding: 0%;
                box-sizing: border-box;
            
            }
            body{
                width:100%;
                height: 100vh;
               
                background-color: aquamarine;
            }
            .cards{
                width:300px;
                height: 180px;
                border-radius: 5px;
                padding:30px;
            margin: 0 auto;
                background-color: lightblue;
                position: relative;
            
                
              
                
            }
            .cards:hover{
                height: 400px;
                transition: .3s;

            }
            .cards:hover .content{
                transform: translateY(-90px);
                opacity: 1;
                
            }
            
            h2,p{
                text-align: center;
            }
            .maincontainer{
                width: 100%;
                height: 100vh;
                display: flex;
                justify-content: center;
                align-items: center;
                flex-wrap: wrap;
                
            }
            img {
                width:100%;
            
                border-radius: 10px;
                transform: translateY(-80px);
            }
            .image{
                width:100%;
                height: 100%;
                position: relative;
                z-index:99;
            }
            .content{
                transition: -3s;
                transform: translateY(-350px);
                opacity: 0;
            text-align: center;
                margin-bottom:1rem;
               
            }

        </style>
    </head>
    <body>
        <div class="maincontainer">
            
                <div class="cards">
                    <div class="image">
                        <img src="C:\Users\91970\Downloads\WhatsApp Image 2023-01-04 at 9.46.58 PM.jpeg">
                    </div>
                    <div class="content">
                        <h2>keep smilling heenu </h2>
                        <ul><li>because of your smile,you make life more beautiful</li>
                            <li>let us always meet each other with smile,for the smile is the beginning of friendship</li>
                            
                        </ul>
                    </div>
                </div>
                
                <div class="cards">
                    <div class="image">
                        <img src="C:\Users\91970\Downloads\WhatsApp Image 2023-01-04 at 9.46.58 PM.jpeg">
                    </div>
                    <div class="content">
                        <h2>keep smilling</h2>
                       <ul><li>because of your smile,you make life more beautiful</li>
                        <li>let us always meet each other with smile,for the smile is the beginning of friendship</li>
                        
                    </ul>
                    </div>
                </div>
                
                <div class="cards">
                    <div class="image">
                        <img src="C:\Users\91970\Downloads\WhatsApp Image 2023-01-04 at 9.46.58 PM.jpeg">
                    </div>
                    <div class="content">
                        <h2>keep smilling </h2>
                        <ul><li>because of your smile,you make life more beautiful</li>
                            <li>let us always meet each other with smile,for the smile is the beginning of friendship</li>
                            
                        </ul>
                    </div>
                </div>
                
              
            </div>
        </div>
    </body>
</html>