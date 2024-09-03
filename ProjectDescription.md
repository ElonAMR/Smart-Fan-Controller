# Smart-Fan-Controller

Project Overview:
This project involves controlling a fan using an Arduino board and an ESP8266 module. The system allows for fan speed adjustment, direction reversal, and turning the fan off through a web interface. The main components of the project include:

Pin Configuration:

The Arduino is configured to control the fan's direction and speed through specific pins.
Fan Control Functions:

Functions are defined to control the fan's speed (low, medium, high), reverse its direction, and turn it off.
Web Server Setup:

An ESP8266 module is used to create a web server that hosts an HTML page for user interaction.
The web page provides buttons to adjust the fan’s speed, change its direction, or turn it off.
Main Loop:

The Arduino main loop checks the web server for user input and adjusts the fan's operation accordingly.
How It Works:

Upon connecting to the specified WiFi network ("MyFan"), users can access the web interface and control the fan remotely.
The fan's status is updated in real-time based on user actions from the web page.




סקירת פרויקט:

הפרויקט כולל שליטה על מאוורר באמצעות לוח ארדואינו ומודול ESP8266. המערכת מאפשרת כיוון מהירות המאוורר, הפיכת הכיוון וכיבוי המאוורר דרך ממשק אינטרנט. רכיבי הפרויקט העיקריים כוללים:

הגדרת פינים:

הארדואינו מוגדר לשלוט בכיוון ומהירות המאוורר באמצעות פינים ספציפיים.
פונקציות שליטה על המאוורר:

פונקציות מוגדרות לשלוט במהירות המאוורר (נמוכה, בינונית, גבוהה), להפוך את כיוונו ולכבות אותו.
הגדרת שרת אינטרנט:

מודול ESP8266 משמש ליצירת שרת אינטרנט המארח דף HTML לאינטראקציה עם המשתמש.
הדף האינטרנטי מספק כפתורים להתאמת מהירות המאוורר, שינוי כיוונו או כיבויו.
לולאת ראשית:

לולאת הארדואינו בודקת את שרת האינטרנט לקבלת קלט מהמשתמש ומעדכנת את פעולת המאוורר בהתאם.
כיצד זה עובד:

לאחר חיבור לרשת WiFi המוגדרת ("MyFan"), המשתמשים יכולים לגשת לממשק האינטרנט ולשלוט במאוורר מרחוק.
מצב המאוורר מתעדכן בזמן אמת בהתאם לפעולות המשתמש בדף האינטרנט.



