<!DOCTYPE html>

<html>
    
    <head>
    <title> Clock </title>
        <style type="text/css">
            body{
                background: #000;
            }
            #clock{
              width: auto;
                margin: 40px;
                text-align: right;
               color: #fff;
                font-size: 50px;
            }
       </style>
        
    
 </head>
    
    
<body>
    
    <div id="clock"> h + m  </div></body>
    
<script type="text/javascript">
    setInterval(displayclock, 300);
    function displayclock (){
        var time = new Date();
        var h= time.getUTCHours();
        var m= time.getUTCMinutes();
        var t= "AM"; //str is a variable for displaying AM or PM
        var s= time.getUTCSeconds();
        
        if (h >12){
            t='PM';     //PM or AM IF statement 
        }
        if (h > 12) {         //12 hours clock
            h = h - 12;
        }
            if (h == 0){
                h=12;
                
            }
       
        if (h < 10){
            h = '0' + h;
        }
        if (m < 10){
            m = '0' + m;
        }
        if ( s < 10){
            s = '0' + s;
        }
        
        document.getElementById("clock").innerHTML = h + ':' + m + ':' +s + ' '+t; 
    
    }
    
        
    </script>
    
    
    
    
    <style type="text/css">
            body{
                background: #000;
            }
            #date{
              width: auto;
                margin: 40px;
                text-align: right;
               color: #fff;
                font-size: 40px;
            }
        
    </style>
        
 <body>       
        <div id="date">D + M + Y</div></body>
        
    <script type="text/javascript">
setInterval(displaydate, 300);
        function displaydate (){
           
            var currentDate = new Date();
            var d = currentDate.getDate();
            var mo = currentDate.getMonth();
            var y= currentDate.getFullYear();
            var m = mo + 1;
            
            if (m <10);{
            m = '0' +m; }
           
document.getElementById("date").innerHTML = d + "/" + m + "" + "/"+ y;
        }
    
</script>


</html>
