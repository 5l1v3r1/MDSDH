# #############################
# Country definition for PAK #
# #############################

country = {
	tag = PAK
	# Resource Reserves
	nuke = 9
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 10
	manpower = 101
	capital = 1534
	transports = 29
	escorts = 0
	diplomacy = { }
	 SpyInfo                = {  country = "PAK"  NumberOfSpies = 3  } 
   nationalprovinces      = {  1529 1530 1532 1533 1534 1536 1537 1538 1539 1540 1278  } 
   ownedprovinces         = {  1529 1530 1532 1533 1534 1536 1537 1538 1539  } 
   controlledprovinces    = {  1529 1530 1532 1533 1534 1536 1537 1538 1539  } 
	techapps = {
		# Industry
		5010 5020
		5030 5040
		5050 5060
		5070 5080
		5090 5110
		5120 5130
		5140 5150
		5160 5170
		5180 5190
		# Army Equip
		2200 2210
		2220 2600
		2610 2620
		2800 2810
		2820 2700
		2710 2720
		2500 2510
		2520 2300
		2310 2320
		2400 2410
		2420 2000
		2010 2050
		2060 2110
		2120 # Army Org
		1960 1970
		1260 1270
		1900 1910
		1920 1000
		1010 1050
		1060 1110
		1120 1500
		1510 1520
		1200 1210
		1220 1300
		1310 1320
		1400 1410
		1420 1800
		1810 # Aircraft
		4800 4810
		4700 4710
		4750 4760
		4900 4910
		4500 4510
		4520 # Land Docs
		6930 6010
		6020 6600
		6610 6100
		6110 6120
		6140 6150
		6160 6170
		6200 6210
		6220 6240
		6250 6260
		6270 # Air Docs
		9030 9510
		9520 9530
		9050 9060
		9070 9090
		9120 9130
		9140 9150
		9170 9200
		# Secret Weapons
		7010 7060
		7070 7020
		7030 7040
		7100 7110
		7180 7190
		# Navy Techs
		3000 3010
		3700 37700
		3710 37710
		3590 3850
		3860 3870
		# Navy Doctrines
		8900 8910
		8920 8950
		8960 8970
		8400 8410
		8420 8000
		8010 8020
		8500 8510
		8520
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 4
		political_left = 5
		free_market = 6
		freedom = 4
		professional_army = 9
		defense_lobby = 5
		interventionism = 7
	}
	# #####################################
	# ARMY
	# #####################################
        landunit = {
		id = { type = 17400 id = 1 }
		location = 1539
		name = "Northern Command"
		division = {
			id = { type = 17400 id = 2 }
			name = "Northern Command HQ"
			strength = 100
			type = hq
			model = 1
			extra = heavy_armor
			brigade_model = 2
		}
	}
        landunit = {
		id = { type = 17400 id = 3 }
		location = 1530
		name = "Central Command"
		division = {
			id = { type = 17400 id = 4 }
			name = "Central Command HQ"
			strength = 100
			type = hq
			model = 1
			extra = heavy_armor
			brigade_model = 2
		}
	}
        landunit = {
		id = { type = 17400 id = 5 }
		location = 1533
		name = "Southern Command"
		division = {
			id = { type = 17400 id = 6 }
			name = "Southern Command HQ"
			strength = 100
			type = hq
			model = 1
			extra = heavy_armor
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 17400 id = 7 }
		location = 1539
		name = "I Corps"
		division = {
			id = { type = 17400 id = 8 }
			name = "6th Armoured Division"
			strength = 100
			type = armor
			model = 15
		}
		division = {
			id = { type = 17400 id = 9 }
			name = "17th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 17400 id = 10 }
			name = "37th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
                division = {
			id = { type = 17400 id = 11 }
			name = "11th Armuored Brigade"
			strength = 100
			type = light_armor
			model = 4
		}
	}
	landunit = {
		id = { type = 17400 id = 12 }
		location = 1530
		name = "II Corps"
		division = {
			id = { type = 17400 id = 13 }
			name = "1st Armoured Division"
			strength = 100
			type = armor
			model = 15
		}
		division = {
			id = { type = 17400 id = 14 }
			name = "14th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 17400 id = 15 }
			name = "40th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
                division = {
			id = { type = 17400 id = 16 }
			name = "5th Armuored Brigade"
			strength = 100
			type = light_armor
			model = 3
		}
                division = {
			id = { type = 17400 id = 17 }
			name = "32nd Infantry Brigade"
			strength = 100
			type = mechanized
			model = 1
		}
	}
	landunit = {
		id = { type = 17400 id = 18 }
		location = 1530
		name = "IV Corps"
                division = {
			id = { type = 17400 id = 19 }
			name = "2nd Artillery Division"
			strength = 80
			type = garrison
			model = 0
		}
                division = {
			id = { type = 17400 id = 20 }
			name = "10th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 17400 id = 21 }
			name = "11th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 17400 id = 22 }
			name = "3rd Armoured Brigade"
			strength = 30
			type = light_armor
			model = 0
		}
                division = {
			id = { type = 17400 id = 23 }
			name = "212th Infantry Brigade"
			strength = 100
			type = mechanized
			model = 1
		}
	}
	landunit = {
		id = { type = 17400 id = 24 }
		location = 1533
		name = "V Corps"
		division = {
			id = { type = 17400 id = 25 }
			name = "16th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 17400 id = 26 }
			name = "18th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
                division = {
			id = { type = 17400 id = 27 }
			name = "25th Mechanized Division"
			strength = 100
			type = infantry
			model = 2
		}
                division = {
			id = { type = 17400 id = 28 }
			name = "9th Armoured Brigade"
			strength = 100
			type = light_armor
			model = 0
		}
                division = {
			id = { type = 17400 id = 29 }
			name = "31st Mechanized Brigade"
			strength = 100
			type = cavalry
			model = 2
		}
	}
	landunit = {
		id = { type = 17400 id = 30 }
		location = 1534
		name = "X Corps"
                division = {
			id = { type = 17400 id = 31 }
			name = "12th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 17400 id = 32 }
			name = "19th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 17400 id = 33 }
			name = "23rd Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
                division = {
			id = { type = 17400 id = 34 }
			name = "8th Armoured Brigade"
			strength = 100
			type = light_armor
			model = 7
		}
		division = {
			id = { type = 17400 id = 35 }
			name = "111th Infantry Brigade"
			strength = 100
			type = mechanized
			model = 1
		}
	}
	landunit = {
		id = { type = 17400 id = 36 }
		location = 1537
		name = "XI Corps"
		division = {
			id = { type = 17400 id = 37 }
			name = "7th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 17400 id = 38 }
			name = "9th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
	}
	landunit = {
		id = { type = 17400 id = 39 }
		location = 1529
		name = "XII Corps"
		division = {
			id = { type = 17400 id = 40 }
			name = "33rd Infantry Division"
			strength = 100
			type = motorized
			model = 2
		}
		division = {
			id = { type = 17400 id = 41 }
			name = "41st Infantry Division"
			strength = 100
			type = motorized
			model = 2
		}
	}
	landunit = {
		id = { type = 17400 id = 42 }
		location = 1534
		name = "XXX Corps"
		division = {
			id = { type = 17400 id = 43 }
			name = "8th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 17400 id = 44 }
			name = "15th Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
                division = {
			id = { type = 17400 id = 45 }
			name = "2nd Armoured Brigade"
			strength = 100
			type = light_armor
			model = 1
		}
	}
	landunit = {
		id = { type = 17400 id = 46 }
		location = 1536
		name = "XXXI Corps"
                division = {
			id = { type = 17400 id = 47 }
			name = "26th Mechanized Division"
			strength = 100
			type = infantry
			model = 1
		}
		division = {
			id = { type = 17400 id = 48 }
			name = "35th Infantry Division"
			strength = 100
			type = motorized
			model = 2
	 	}
		division = {
			id = { type = 17400 id = 49 }
			name = "13th Armoured Brigade"
			strength = 100
			type = light_armor
			model = 1
		}
                division = {
			id = { type = 17400 id = 50 }
			name = "101st Infantry Brigade"
			strength = 100
			type = mechanized
			model = 1
		}    
	}
	landunit = {
		id = { type = 17400 id = 51 }
		location = 1539
		name = "Force Command Northern Areas"
		division = {
			id = { type = 17400 id = 52 }
			name = "61st Infantry Brigade"
			strength = 100
			type = mechanized
			model = 1
		}   
                division = {
			id = { type = 17400 id = 53 }
			name = "62nd Infantry Brigade"
			strength = 100
			type = mechanized
			model = 1
		}   
                division = {
			id = { type = 17400 id = 54 }
			name = "80th Infantry Brigade"
			strength = 100
			type = mechanized
			model = 1
		}   
                division = {
			id = { type = 17400 id = 55 }
			name = "150th Infantry Brigade"
			strength = 100
			type = mechanized
			model = 1
		}   
                division = {
			id = { type = 17400 id = 56 }
			name = "323rd Infantry Brigade"
			strength = 100
			type = mechanized
			model = 1
		}   
	}
	# ###################################
	# NAVY
	# ###################################
	navalunit = {
		id = { type = 17400 id = 300 }
		location = 1533
		base = 1533
		name = "Pakistani Navy"
		division = {
			id = { type = 17400 id = 301 }
			name = "PNS Tariq"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 17400 id = 302 }
			name = "PNS Babur"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 17400 id = 303 }
			name = "PNS Khaidar"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 17400 id = 304 }
			name = "PNS Badr"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 17400 id = 305 }
			name = "PNS Shah Jehan"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 17400 id = 306 }
			name = "PNS Tippu Sultan"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 17400 id = 307 }
			name = "PNS Zulfiquar"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 17400 id = 308 }
			name = "PNS Shamsher"
			type = destroyer
			model = 3
		}
	}
	navalunit = {
		id = { type = 17400 id = 309 }
		location = 1533
		base = 1533
		name = "Submarine Fleet"
		division = {
			id = { type = 17400 id = 310 }
			name = "PNS Khalid"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 17400 id = 311 }
			name = "PNS Saad"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 17400 id = 312 }
			name = "PNS Hashmat"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 17400 id = 313 }
			name = "PNS Hurmat"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 17400 id = 314 }
			name = "PNS Hangor"
			type = submarine
			model = 1
		}
		division = {
			id = { type = 17400 id = 315 }
			name = "PNS Shushhuk"
			type = submarine
			model = 1
		}
		division = {
			id = { type = 17400 id = 316 }
			name = "PNS Mangro"
			type = submarine
			model = 1
		}
		division = {
			id = { type = 17400 id = 318 }
			name = "PNS Ghazi"
			type = submarine
			model = 1
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 17400 id = 200 }
		location = 1537
		base = 1537
		name = "32nd Wing"
		division = {
			id = { type = 17400 id = 202 }
			name = "2nd Squadron"
			type = tactical_bomber
			strength = 50
			model = 7
		}
		division = {
			id = { type = 17400 id = 203 }
			name = "7th Squadron"
			type = multi_role
			strength = 100
			model = 6
		}
	}
	airunit = {
		id = { type = 17400 id = 204 }
		location = 1529
		base = 1529
		name = "33rd Wing"
		division = {
			id = { type = 17400 id = 205 }
			name = "14th Squadron"
			type = multi_role
			strength = 100
			model = 6
		}
		division = {
			id = { type = 17400 id = 206 }
			name = "15th Squadron"
			type = tactical_bomber
			strength = 100
			model = 6
		}
		division = {
			id = { type = 17400 id = 208 }
			name = "20th Squadron"
			type = multi_role
			strength = 100
			model = 6
		}
		division = {
			id = { type = 17400 id = 210 }
			name = "16th Squadron"
			type = multi_role
			strength = 100
			model = 6
		}
	}
	airunit = {
		id = { type = 17400 id = 211 }
		location = 1529
		base = 1529
		name = "Naval Patrol Wing"
		division = {
			id = { type = 17400 id = 212 }
			name = "Naval Squadron"
			type = naval_bomber
			strength = 30
			model = 3
		}
	}
	# ###################################
	# Under Development
	# ###################################
	division_development = {
		id = { type = 17400 id = 400 }
		name = "PNS Hamza"
		type = submarine
		model = 3
		cost = 5
		date = { day = 9 month = april year = 2006 }
	}
}
