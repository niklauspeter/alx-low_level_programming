#include <stdio.h>
#include <stdlib.h>

/** name_cnt - takes in string containing list of two names
 * breaks it down and counts how many names are in list
*/

int name_cnt(void)
{
	int count = 0;
	int i;
	char str[] = "Emmanuel Makokha - Charity Makokha
		
		Vincent Kamemia - Karuri KARURI
		
		Faith Onkundi - Mark Muriuki
		
		Rebecca Ndirangu - dominic marege
		
		Siele Kipkurui - Anthony Ngunjiri
		
		Lavender Munyasa - Reinhardt Bett
		
		Cynthia Momanyi - joel Kabugi
		
		Mary Sowa - Fred Juma
		
		Ann Kigondu - Bonke Shadrack
		
		Malcolm Marwa Mwita - Eliud Njuguna
		
		Barua Marege - Mwita Nyangige
		
		Marion Ondieki - Victor Owuondo
		
		Lisa Maria Munga Munga - John Namunje
		
		Kayongo Yongo - Nashon Masira Obondi Masira
		
		Cyprian Korir - Ian Njenga
		
		Bob Hawkins - Braxton Otieno
		
		Erick Gathege - Maureen Isagi
		
		Kelly Mungai - Okaka Edgar Okaka
		
		Teddy Karisa - Bonveee Ochieng
		
		Vallerie Myra - Andrew Mayaka
		
		Wabwire Victor Kijana Kijana - Brenda Jeptum
		
		Naftali Gakuru - Priscah Momanyi
		
		Bravine Cheruiyot - Elkana Lang'at
		
		Kelly gikunda - KEVIN LUKE
		
		Majak Marial Chol Dhol - Arnold Kimeu
		
		Michael Machohi - Sheilla Macharia
		
		David Karanja - Martin Mwirigi
		
		Ms. Joyce Muema - Edwin Odhiambo
		
		Denis Kibe - winston Ndung'u
		
		Rose Njoki - Daniel Muruthi
		
		Mutisya Mutisya - Brenda Bange
		
		Wanjiru Charity - Walter Angoye
		
		Nzioki Nzioki - Jabir Omar
		
		Klaus Peter - Trevor Ndegwa
		
		Mordecai Kipng'etich - Emmanuel Inziani
		
		Lawrence Njihia - Meli Meli
		
		sammy Mwongera - fezhull mutea
		
		Kevin Chaula - Aalya Farooqui
		
		Jackson Kibara - Nicholas Ouma
		
		Arnold Aijuka - Tobin Kisero
		
		Fredrick Musyoka - Stephen Kariuki
		
		Faith Genga - Grace Rotich
		
		Newton Muhato - Becky Muriithi
		
		Davis Korir - Walter Ong'ondo
		
		TK Kimanzi - Elton Simiyu
		
		Lucy Njeri - BIWOTT JEMTAI STACY Biwott
		
		Bob Oyier - Fredrick Kageche
		
		Ramadhan karisa - Lenny Maina Maina
		
		Mohamedhashir Hussein - Rehema Owino
		
		Gilbert Makori - pascal otieno
		
		Joakim Muli - NAUMI MUISYO
		
		Hendrica Ogema - ABDUL JUMA
		
		Fred Agullo - Awuor Opanga
		
		Vona Andriamahazomana - Eric Ndumbi
		
		Moses Munene - Daisy Kendagor
		
		Tedmack Mutuma - Hassan Hussein
		
		Jack Mtembete - Reinhard Nzomo
		
		CHRIS MOMANYI - Luke Mwangi
		
		Nicholas Maina - Betty Kariuki
		
		Alex Morgan - Shukri Osman
		
		Brian Mululu - Emmanuel Makonde
		
		Frankline Kinyua - Jackie Mutuku
		
		Hassan Hassan - Esperance Mugogwe
		
		Juan Nyange - minnie thuo
		
		Titayi Wambugu - Curtis Sila
		
		Abdishakur Shariff - Zhakiya Wako
		
		Ronny Owuor - Wendy Akinyi
		
		Kevin Kinyua - Benson Maina
		
		David Njoroge - jackline kariuki
		
		Malcolm Mwawongo - Mwamburi Patrick
		
		Ian Muigai - JOSEPH THUO
		
		IMRAN KHALIF KOSAR KHALIF - sylvia waweru
		
		Meen Madhang - Yunis Hassan Abshir Abshir
		
		Trevor Omondi - Ngendo Kihiu
		
		Movin . - Sharon Sibuda
		
		Lorna Mungai - Abdilatif Ali
		
		Daniel Kinyua - Robin Wachania
		
		Alice Mwangi - Lekarri Kaila
		
		John Njonge - Mercy Kendagor
		
		Paulet Wanjiru - jactone odongo
		
		ARTHUR OWINO - Tracy Mwangi
		
		Justice Otieno - Oliver Njeru
		
		Esther Muasya - Irungu Josphat
		
		Philip Nyoro - Faith Chebet
		
		Noella Omusale - Brian Ngulolu
		
		AUSTIN MORARA MONGARE MORARA - Esther Karanja
		
		Kennedy Mwangi - Kyle Kibet
		
		Geoffrey Wanyonyi - Velma Ambalwa
		
		Lameck Oduka - Issa Ali
		
		Ian Musima - Juliet Auma
		
		Brian Etemesi - Oduor Otieno
		
		IMMANUEL DENA - Sandy Mamai
		
		Joseph Gakoi - Daniel Mulama
		
		Kelvin Warui - Alexander Maina
		
		Jayson Abwoya - charles mumo
		
		Mark Andrew Kamau Andrew - Wairimu Wairimu
		
		Devonne Muriithi - Gerald Njakai
		
		Nickson Simiyu - Tom Luther
		
		Wambua Wambua - Victor Kimani
		
		Wilson Muriithi - Zahra Jalalkhan
		
		KELVIN LOMERLIM - Geoffrey Pkorkor
		
		Elsie Maina - Rem Wanyonyi
		
		Sam Opar - Myles Munroe
		
		Zainab Ibrahim - Samson Kimani
		
		yvonne Yano - Sheila Thungu Thungu
		
		Davis Nyabwari - Immanuel Kituku
		
		loise kamau - Davy Ranks Odanga
		
		Lual Manyang - Ralph Baraka
		
		Sakina Hussein - Fred Nyambok
		
		Jufri koech - Cleophas Ouma
		
		Lukas Nguku - Lorraine Eyinda
		
		Linda Njau - Ian WANDETO
		
		Samuel Mweri Charo Mweri - John Njau
		
		Wabi Sherie - Mutua Solomon
		
		Kennedy Mwangi - Lynn Ekalaji
		
		EDISON Ngunjiri - Vincent Oluoch
		
		Hesbon Otieno - Jaslan Mudanya
		
		COLLINS Tonui - Onesmus Mwai
		
		Glorine Vihendah - Michael David
		
		temesgen gebremariam - DannyNtale Daniel
		
		Enola Enola - Aryton Koskei
		
		Lorraine Ameda - Ruth Gichina
		
		Samuel Ng'ang'a - John Nyokabi
		
		Benard Wamwea - Faith Afundi
		
		Winfrida kemunto obinyo Kemunto - Kelvin Barasa
		
		Joan Joan - mary Mativo
		
		Lucy Wanjiru - Caroline Kimatu
		
		Christine Kinuthia - Macharia Macharia
		
		Elijah Chepkwony - jeffrey hongo
		
		Tehillah Ng'ayu - Aahad Yamani
		
		WYCLIFF Gitau - Keya Butitah
		
		Dickson Makulia - Wallace Muchesia
		
		Oyugi Benson - Steve Ramoya
		
		Hannah Ndonye - Everlyn Makau
		
		Emmanuel Kemboi - Judith Judith
		
		Kelvin Mumo - Olympiah Otieno
		
		Vick Ouma - Michael Sipikiti
		
		Gitu Gitu - Vivian Kerubo
		
		Winnie Mwangi - Joash Gamba
		
		MAURINE OMONDI - Pato osoo
		
		Jane Odhiambo - Bryan Macharia
		
		Cleo Rotich - Kyle Koroso
		
		FELIX Muraguri - Brian Mike
		
		Felix Mukoma - Joseph kuria
		
		Justus Nderitu - Tomkys Gitonga
		
		Belkien Masinde - Elisée Elisée
		
		Peter Kioko - Dennis Gicheru
		
		edwin Nchoga - Wesliey Muchiri
		
		Tracy Weru - Yvonne Weru
		
		purity Kinoti - Peter Peter
		
		Patrick Wanjau - Rogiers Kiprop
		
		IAN OTIATO - James Kalume
		
		Sheilla Wahome - Maryam SHARIFF
		
		Sameer Moosa - Nitesh Halai
		
		Amos Koech - Ellaine Addamms
		
		Odhiambo I. Dan Dan - PETER OLWANDE
		
		Joy Micheni - Abigael Ongwae
		
		Evans Kariuki - Elvis kirimi
		
		John Ngethe - Tumuti WAMUGI
		
		Juma Paul - Shalem Zorro
		
		BRIAN Shifoko - Imo Imo
		
		Makena Njeru - Patrick Kiarie
		
		Jane Njaga - james Mwangi
		
		Nicholus Mwika - Daniel. Wanjiru
		
		Gilbmet Ongalla - Vanessa Okumu
		
		Dennis Kobe - kantai Nabaala
		
		Emmanuel Juma - Killian Muthami
		
		Michael Kisato - Anilla Wambaki
		
		Samuel Kiarie - Mercy Karanei
		
		Telvin Gitu - David Ochido
		
		Chebet Kamara - Gicheru Murakaru
		
		Cindy Onwong'a - Diana Gudu
		
		Ramadhan Omondi - Alex Muhia Kamau
		
		lyle Okoth - Lasiti Lasiti
		
		Charles Kuria Wambui Wambui - Benadetta Waweru
		
		Mr. Mutuku Mutuku - Anderson Njahi
		
		Njoki Wambui - Kanz Mukanzi
		
		Rodgers Ogada - Benjamin Musili Kithuka
		
		Julius Mwangi - Dennis ndungu
		
		Joseph Muiruri - BRIAN KIPCHIRCHIR
		
		Claudia MATHENGE - Dorothy Oganda
		
		Timothy Muriuki - Eric Mbogo
		
		Chris Gachuhi - Geoffrey Kirui
		
		Ken Muiruri - Diana Kyalo
		
		Laban Kilonzo - Bravin Imbarabara
		
		Sandra Chege - Gabriel Mwenje
		
		Monicah WANJIKU - PETER IGUANYA
		
		Jeremy Mwangi - MARYANNE NJERI
		
		Fatuma Yattani - Alex Kioko
		
		Elaine Nguma - Faiza Yussuf
		
		Myrajoy Kiganane - WINNIE Ongare
		
		Milka Makanda - Ash Njoroge
		
		Dorothy Okari - Luvala Luvala
		
		Erick Barasa - Joseph Kakai Ngalu Ngalu
		
		ALOICE OGANA - NAGWANG'A NANG'OMA
		
		Arlyne Too Too - MUTHAURA KARIMI
		
		John Wanjiru - Desmond Nyalwanda
		
		Ann Githuki - Cleophas Kadima
		
		Imelda Atieno - COLLINS MUKOTO
		
		machiek bith - Anthony Khaoya
		
		Gladys N - Vincent Wanjohi
		
		Njeeh Bekah - Mike Ochieng
		
		Sheila Nanjala - HUSSEIN Juma Ajuoga AJUOGA
		
		Jacca Jacca - Caroline Wanjiru
		
		Doreen Kubu - Vincent Aluru
		
		Isaac Kiarie - Amos Kairu
		
		Jose Aholi - Wamalwa Timbe
		
		Paul M - Ronaldo Cheruiyot
		
		Alex Kinyanjui Gikonyo - Aggrey Omondi Bollo Bollo
		
		Amos Maina - MARTIN NDUTI
		
		Faith Kangui - Abigael Okemwa
		
		Mwaura Mbugua - Caroline Ayieko
		
		Edward Muriuki - George Wambani
		
		Alexander Kiprop - Benjamin Musyoki
		
		Derrick Nyabuto - Leroy Buliro
		
		kamau maina - purity chege
		
		Ronald Tonui - Tony Oleng
		
		Ebenezer Akhonya - alvin kamande
		
		Sharon Wafula - Peter Mwai
		
		Kennedy Maganjo - Clement Nyambura
		
		James Karanja - ALLAN ROP
		
		Alet Ondeko - Warsame Jama
		
		Gideon Mutunga - Davi Oduor
		
		Jude Tulel - Collins Onyango
		
		Evelyn Muema - Allegra Mitau
		
		Brian Adul - Emmah Onchonga
		
		Reuben Ndegwa - Carol Nyaguthii
		
		ALICE Maga - Eve Waruguru
		
		Erick Muriithi - Imelda Gichini
		
		David Lekopien - Hugh Muraya
		
		Geoffrey Gachuiri - Lilian Muriithi
		
		Bravine Bwire - Joseph Moya
		
		Margaret Mutinda - Fred Ouko Ouko
		
		Antony Omondi - samuel Mwaniki
		
		Alex Mambo - Theodore Tsori
		
		Eliud Kiwinga - Umeya Kassim Mohamed Mohamed
		
		JANICE GATHOGA - Lucianne Odiero
		
		Omuthe Oduor - Hesham Hassan
		
		Kennedy Ombajo - Brian Omondi
		
		Harold Safary - Venant Sumba Haraka Sumba
		
		Edward sila - M Makena
		
		Bravin Mwangi - Eutychus kuria Kimathi
		
		Johnny Kigotho - dennis MIRITI
		
		Mercy Njogu - Sarah Okeyo
		
		Michelle Wangari - Ken Mwangi
		
		NIXON MURUNGA - Wanjiku Ngocho
		
		Stephanie Iman - Benson King'ori
		
		Brian Wanjala - Ashley Ingete
		
		Evelyn Musyoki - Muthoni kamau
		
		Sharon Akechi - Steve Muiyuro
		
		John Nganga - Glory Mbone
		
		Peter Brian - ABNER NYANGENA
		
		Bosibori Nyamache - Bonface Kiarie
		
		Paul Mayeku - Larry Chepkwony
		
		Ian Kariuki - Albinus Omwaga
		
		Stvn Much - Charles Musabi
		
		Felix Odhiambo - EVANCE ODOYO
		
		Keith Kadima - Nicholus Ndegwa
		
		Hellen Ndathi - Wafula Marabu
		
		Gerishon Wachira - Joseph Njenga Cheche Njenga
		
		Brian Kimani - Janipher Owiny
		
		koroso Ochanda - Lameck Momanyi
		
		John Maina - Esther Warui
		
		Abubakar Nasteh - Michael Audi
		
		Cynthia Kioko - Benson Mburu
		
		Seth Makori - Lily Mugambi
		
		Cindy KOECH - Biatus Kamau
		
		Edrian Owuor - Fredrick owino Owino
		
		Murugi Nthakanio - Dennis Kinyanjui
		
		Sammy Muriithi - Martin Kiilu
		
		Elizabeth Kioko - Naomi Chelugo
		
		Latifa Abdallarehan - Michael Murage Murage
		
		Isaac Mititi - Josephine Mutuku
		
		Cecilia Ouko Ouko - Alex Juma Babu
		
		Kephasho Dennis - Phylis Mercy Njoroge
		
		Munyui Loise - Irvine Sunday
		
		Judith Muriuki - Laban Kipkosgei
		
		Clevers Rungene - NICANOR Maswili
		
		DONALD MWANGA FESTO - James Ngaruiya
		
		Sospeter Lumumba - WENSLAUS JUMA
		
		Hafi38 hafizuh - Sam Njuguna
		
		IBRAHIM HASSAN - Calvin Baraka
		
		Natasha Ngala - Austin Njuguna
		
		Raymond Wameyo - Lewis Maimbu
		
		Gathoni Mbuthia - Donald Okoth - Murangiri Mugambi
		
		Kelvin Mbugua - Alex Otieno
		
		Shaleen Njoki - Kevin Kiragu
		
		Esau Obuong Walela - Oketch Velma Atieno Oketch
		
		Simon Wanjir - kevin ongulu
		
		Janis Theuri - Joel Mwangala
		
		Emanuel Kioko - Herbert Kipkoech
		
		Okanda Okanda - Bilson Ololchike
		
		Mathew Mutevu - Martin Omari
		
		Deliic Wambeti - Faith Muraya
		
		Pius Waithira - Gaylord Agesa
		
		Abong'o Joe Joe - derrick A
		
		Kipkoech Eric - Viola Chemutai
		
		David Lelei - SAMUEL MURIUKI
		
		CHRISTABEL KHAKALI - Alex Ouma
		
		Jessica Olisa - Silim Hussein
		
		Hezekia Kiarie - Ian kiplimo
		
		Agutu Agutu - Maina Maina
		
		Amos Kiplimo - Brian maingi
		
		Micah Ondiwa - Grace Waga
		
		Muhammad Hassan - Kamal Norman abdul
		
		Leah Kamau - Nesh Munene
		
		Roberts Seko - Evalyne Wandeto
		
		Lilian mutua - Terry Mukundi
		
		Geofrey Ouma - Maamun Bwana
		
		Samuel maina wanjohi wanjohi - Rosemary Gichuki
		
		Nyoru Akiru - Alex kimathi
		
		ken Kariuki - Steve Okok
		
		Will Njuguna - karimi Karimi
		
		Jay Felix - Victor Olum
		
		JosephThuku Thuku - Ahmed Jar Rassoul
		
		Edmund Spira - Laban Rotich
		
		Dennis Muia - Vic Munala
		
		Aisha Khalifan - Eric Okemwa
		
		Alice Wainaina - Enid Chebet Bii
		
		Salim Waithaka - kevin musanii
		
		EMMANUEL KIMARU - kelvin stella
		
		Lucy Migwi - Douglous Sobei
		
		Johnray Mwendwa Muthoni - Buno Woche
		
		Karanja Wainaina - Dennis Sammy
		
		Samuel Kinyua - Caleb Kipngeno Kirui Kipngeno
		
		elijah chino - Harry Annan
		
		Gideon kimutai rono - Mary Makumi
		
		George Gathu - Jason Kimeu
		
		Patience Simuli - brian Gachago
		
		Rose Wairimu - Benson Basweti
		
		Victor Amonde - Boniface Mbogho
		
		antony musumba - Humphrey Muriungi Muriungi
		
		Lwembe Mwachilumo - Presley Sakwa
		
		Alvin Mwaura - Dalphon Osero
		
		Sharon Gikenye - Tony Maiyo
		
		Dennis Kirimi - Fabian Kinyua
		
		Zakiya Abass - Petro Alela Alela
		
		Shannon Simiyu - Roderick Awuor
		
		Emmanuel Misiko - Steve Wanangwe
		
		Emmaculate Owaga - Charity Kilonzo
		
		Kiswa Seif - Suleiman Ahmed
		
		Charles Maina - James Kariuki
		
		Ngare Eudicus - Sylvia waweru
		
		Nahashon Ndirangu - Caroline Mwobobia
		
		Mitchelle Wavinya - Christian Nga'ng'a
		
		Samuel Muna - Myra Jarenga
		
		Victor Thuo - Allan Kariuki
		
		ANDIEBLAKK ODUOR - Kosgei Amon Kipngetich Amon
		
		Joseph Kamau - Samson Atinda
		
		Mary Omari - Fazal Haneef
		
		Kevin Oluoch - John Ochieng
		
		James Ndung'u - Reginald Kyalo
		
		Erickson Mbuvi - victor chogo
		
		Fadhili Kui Kui - Rosalia Muia
		
		Audrey Otani - Johnclinton Luseno
		
		Timothy Roticb - Mark Kibara Murithi
		
		Anita RWEYA - Rancy Chepchirchir
		
		Anderson Baraka - Brenda Mwenda
		
		YOUNG SIKOLIA - Anne yakobeth
		
		Adam Muoki - Wayne Kiriinya
		
		Stefan Mwale - Jairo OBEWA
		
		Mumbi Wambugu - Justin Murimi
		
		Samwel Macharia - Joseph Munyuiri
		
		Robert Ndolo
		
		Grace GICHUKI - Muturi Melvin
		
		Eric Ndwiga - Moen Nyongesa
		
		THOMAS NZOKA - Angela Odera
		
		Abdulmajid Fahim - Dennis Muema
		
		Diana Khasitsa - Jackson Mwangi
		
		Maureen Thuo - Michelle Thuo
		
		David Lukonzo - Boniface Munyao
		
		Mohamed Hussein - Teddy Maina
		
		Osar Omido - Patrick Ndirangu
		
		Joyce KIBUGI - Immanuel Mwiti
		
		Karimi Yvonne - Stacy Ndubai
		
		Alice Nyambura - Naomi Githiu Githiu
		
		Abdikhaliq abdi - Barney Gordons Gordons
		
		Michelle Wayua - Justine Bororio
		
		Remmy Silver Silver - Samwel Opondo
		
		Fabian Mutua - Roy Kip Kiplagat
		
		Shawn Kiplagat - Mohamed Hassan
		
		Dan Nyaga - joseph muriithi
		
		Evans Yator - Ariet Abuy
		
		Robert Njoroge Maina Maina - Rebecca Jeane Okello
		
		wangari kamonde - Broline Oronu
		
		Joseph Kinyodah - Kieti Mutemi
		
		Michael Njogu - Dennis Murage
		
		Brian Mogire - Kevin_M Njoroge
		
		Kate Mbae - M Tinega
		
		Stephen Gikanga - Mike Okuma
		
		Moses nzivo - Dalton Kinyua 🍑
		
		Phil Onyango - JOSEPH MWIKWABE
		
		Angie Angella - Vincent Ochieng
		
		Francis Kamara - Oscar Kamau
		
		Vivianne Kendi - Chris Ndege
		
		Peter Mutua - Betty Mwiti
		
		felix Cheruiyot - Liz Kemuma
		
		Emilly Tiampati - Caren Cheruto
		
		Mary ouma - Jan Nelson Nelson
		
		Mohamed S - kelvin murithi
		
		IRENE NDIRITU - Adega Adega
		
		Jerry Oyugi - Doreen Mumo
		
		Victor Gachenge - Lydia Taban
		
		Dan Walobwa - David Onyango
		
		Brandon Waweru - Memusi Robi Robi
		
		Alex Otara - Dennis Kosgei
		
		Doreen Tenai - LEONARD KIPCHIRCHIR
		
		Arnold Mvoi - Edwin Abuga
		
		SIMON Rabuogi - faith Gisemba
		
		Daniel Kariuki - Brian Amakulie
		
		BRIAN MUSYOKI - Elvis Mburu
		
		Duncan Kipruto - Annette Adhiambo
		
		Kevin Kamonye - Larsen Mulamba
		
		Caroline Kinuthia - Anne Njuguna
		
		Raphael Owen - Diana Muchoki
		
		Mathew Riri Njoka - Cyril Ambwaya
		
		Daniel Odoyo - DELMUS OGORA
		
		Davies Magare - Timothy Kanda
		
		AMATETE DAN - Wanambisi Wanambisi
		
		Alex Kiiru - tacar Kinyua
		
		Jeremiah Wambua - Victor Odoyo
		
		Ryne Warukira - Fred Oduya
		
		John Partary - Faith Wandera
		
		Asaph Brian - Gikonyo Kimani
		
		Jackline Muraya - MURIUKI MWIRIGI
		
		BONIFACE Muchiri - Brayan Imbayi
		
		Benny Machache - Samantha Ajibade
		
		Mahmoud Shee - Wilfred Mugacha
		
		Ibkam Kamau - Abdikarim Ali
		
		Abby Malakwen - Andrea Wacu
		
		Rayyan Kiarie - kendi Kendi
		
		David Mwaniki - Thomas Okoyo
		
		Nahashon Kariuki - Derick Amudavi
		
		David Langat - Victor Opoti
		
		Aurelius Natse - LILIAN momanyi
		
		Julia Kinuthia - Frank Onyiego
		
		Benjamin Musau - Moses Gitau
		
		Flesier Onyango - Moses Morris MUIRURI
		
		ODERO ODERO - Allan Sang
		
		Laban Kaunda - GEOFFREY Mogaka
		
		Chelsea Chemweno - Peninah Orengo
		
		Betty Chepkoech - Ian Ugaji
		
		Jabin OWEGGI - MOHAMED IBRAHIM
		
		Festus Nyabuto - Stefan Munyoki
		
		Abraham Maiko Kingoo Maiko - Emmanuel-Barsu Barsulai
		
		SIMBA SUPERIOR Peter - DUKE obare ombiro
		
		Cynthia Kamau - Ivy Wangusi
		
		HELLEN Mito - Dennis Ngari
		
		Derrick MUKILI - Josephine Oketch
		
		Brian Sakwa - Myra Sukantet
		
		Joan Moyi - ANTONY OCHIENG OTIENO
		
		ROGERS MUGAMBI - Ernest Ngare
		
		Francis Onyach - Francis Omiti Omiti
		
		Barbra Gitonga - Paul Muema
		
		Caleb Too - Billy Kithumbu
		
		Moses Osoro - Jude Gathoga
		
		Josephat Muthiani - Kyalle Wamitila
		
		Ian Odhiambo - Emeldah Matengo
		
		Wangechi Agnes Gichuhi - Travis Ojee
		
		Sam Kimani - Stephen Muendo
		
		Amani Mkongo - Obadia Kipchumba
		
		Dennis Onyango - Dianah Nyamweya
		
		Patch Osodo - Jackson Mwangi
		
		Elsie Wakarima - Jacob Obara
		
		Michael Bonyo - JosiahMbithi001 Mbithi001
		
		JACOB MOEGI - David Mwangi Wanjiru Wanjiru
		
		James Nding'uri - Victor Njoroge Njoroge
		
		Thomas Muratha Muratha - Kawino Kawino
		
		Yvette Lando - Robert Maina
		
		Sammy Moruri - Brian Kingori Murage Murage
		
		Ashley Okeyo - Owen Ochieng
		
		Fainus Mudahe - BRYAN ASEGA ASEGA
		
		Linah Shivonje - Winga Ronney
		
		Arnold Oduor - Brian Muraya
		
		Barasa Murunga - Faith Toma
		
		Mohamed Ali - Gabriel Tindi
		
		kibet collins - Shabaki Lenga
		
		Kwabo Huncho - Steve Kipkemboi
		
		Keya Keya - Martina Ochieng
		
		Glendah Nyabuto - Wycliffe Muchumi
		
		Annah Nekoye - Frank Gichaba
		
		Desterian Ragira - Norbert Ombese
		
		CHERUYOT KIRUI - Victor Mwiti
		
		cikambasi lukogo - Peter Nzioki
		
		Collins Mutai - Rodney Makori makori
		
		AMOS Kinuthia - Roy Mutua
		
		Tracy Wankio - stephen wanjala
		
		Samuel Ochieng - John Musyomi
		
		Cynthia Isutsa - Brian Mwallo
		
		Solomon Kipkirui - Reuben Ongwae
		
		Ivy Chepkemboi Munialo - Dennis Ngombo
		
		JUSTIN ABWUNZA - Victor Ahona
		
		MAINA MAINA - Francis Kamau
		
		Josphat Ngugi - Kennedy-ben Bernard
		
		Suweys Abdullahi - George Ruchathi Kinyanjui Kinyanjui
		
		Clinton otieno odongo Otieno - Brian Cheruiyot
		
		Mercy Wekesa - Derick Pambah
		
		Felix Ochieng - Ox1 Ainga
		
		Nancy Ngatia - Sylvia Ndungu
		
		Nicholus Mwanthi - David Otieno
		
		Zubeda-Raya Said - Diana Amwayi
		
		Martin Ndegwa - Hildagard Msuya
		
		Caroline Gichuki - Alex Oloo
		
		Usher Njuguna - Nigel Busula
		
		Kibet Richard - IAN Vincent
		
		Zumrati Ibrahim - Patrick Kimani
		
		MANYARA BARAKA - Maryanne Muriuki
		
		Ernest Mutwiri - Abdia Elema Gababo
		
		Brivan Karani - Stephen Njogu
		
		Lyson Lyson - Wambui Kahuthu
		
		Simon Kariuki - MONICAH MUNYUA
		
		BERNICE KARANJA - Kennedy Nyamai
		
		Victor Situma - Allan Too
		
		Fiona Githaiga - mwangi njeri
		
		Kemboi kirwa Kirwa - Loyd Ngei
		
		Nate Mungai - Peter Ndungu
		
		Joe Kaunda - Dickson Nduati
		
		Hasman Hassan - Emmanuel Mukangai
		
		elvis wangari - Amwenya Nehondo
		
		Elvin OPAKI - Joseph Temesi
		
		Pat Aloo - Michael.k Kibuku
		
		Erasto Isanda - Daniel Samoei
		
		Benjamin Oduor - Emmanuel Onyango
		
		Purity Mumbi - Kevin Muema
		
		Naftali Budamba - Emmanuel K
		
		Collins Wanjau - Brian Kinyanjui
		
		Olga Ngoni - Alvin Munai
		
		Iddah Odhiambo - Teresia Karanja
		
		Nicole Khaniri - Emmanuel Iyese
		
		Alphonse Otieno Oketch Otieno - NiNyabayo NYABAYO
		
		Lynet Mwikali - Joseph Ongoro
		
		Wolleys Onyango - Winnie Wahome
		
		Hannah Akadeli Akadeli - Duncan Irungu
		
		CEASAR CEASAR - Crispus Ouma Okoth Ouma
		
		Titus Cheserem - Vincent Okoth
		
		RONALD YEGON - Samson GAKINYA
		
		Setric Muholo - Jacinta Mueni
		
		Denis Karanja - Kennedy Okoth
		
		Brian Osoro - Sankara Ang’iro
		
		Maurice Otsieno - Eric Nabangi
		
		Mumbe Kitonga - Dickson Kiragu Warwere Kiragu
		
		Margaret Karuri - CHERUIYOT WELDON
		
		Leone Arina - Jacob Ojijo
		
		Ayub Kimani - Anne Githiomi
		
		Charles Motaroki - Paul Wainaina
		
		Jackson Gerald - Jane Njihia
		
		Rhoda Manyaga - Mary Kamau
		
		Dennis Waruhiu - Mary Ogola
		
		Elizabeth Aloo - Faustin Mudemi
		
		Davis Muhoho - Justo Achola
		
		Gerry Onyango - John Kuira
		
		Bernard Ohato - Elizabeth Njeri
		
		Jaffar Hussein GURA - Hanan Ibrahim
		
		Newton Ombese - samuel kinuthia
		
		Susan Waweru - Dan Kamochu
		
		Anne wambua - Thomas Odhiambo
		
		Duncan Kungu - john munga
		
		DAVE ARUNGA - EMMANUEL OCHIENG
		
		Janet Ceere Mugambi - Allan Makau
		
		Marian Chapa - Ivy Mutisya
		
		Musazili Abamu - Gabriel Wanjiru
		
		Jonathan Jonathan - Nicholas Barasa
		
		Robert John - Enid Shilwatso
		
		Brian Mackay - ELGRIGO GARANG Lubanga
		
		Hazi Hazi - Joshua Mwangangi
		
		Rolex Obunga - Rose Kimondo
		
		Sylvia Otieno - Aaron mrima
		
		Abigail Wanyika - Stephen Mukoma
		
		Daisy Victoria - Trevor Langat
		
		Allan Munene - calvin Ong'era
		
		Eric Munyi - Dennis Maritim
		
		Nima BIRIK - Damarice Menganyi
		
		Enock Nyausi - Cheldean Mutheu Musingila
		
		FAITH WAMBUI - Brian Kipchumba
		
		sarafina gathoni - Douglas Ken
		
		Vivian Okall - Kadzo Kadzo
		
		Hope Kerubo - Georgina Kanja Ndayiziga
		
		Mwas Ndirangu - Ian Odhiambo
		
		Ibrahim Hamisi - Lukasi mulaa
		
		Nancy Njeri - Ezekiel Wele
		
		CLINT OBARE - olang philemon
		
		Brian Aloo - Eugenia Mwiwawi
		
		Jackson Mugoya - Praise Mwangi
		
		Robert wainaina - Ariel Ortega
		
		Muronji mulievi - Valerie Sabala
		
		Jessy Esere - Claudia Ngure
		
		Anita Wangui - Juliet Njoroge
		
		Levis ngigi - Jactone Ondidha
		
		Chagalla Onzere - kelvin kakuru
		
		Gedion Wambua - Alvin muriithi
		
		Anne Kabutu - Faith;

	while (str == 45)
	{
		count += 1;
		str++;
	}
	return (count * 2);
}
