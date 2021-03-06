
##############################
# Country definition for GUA #
##############################

country =
{ tag                 = GUA
  manpower            = 21
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 10
  capital             = 2088
  diplomacy           = { }
   nationalprovinces      = {  2088 2087 2086  } 
   ownedprovinces         = {  2088 2087  } 
   controlledprovinces    = {  2088 2087  }
  techapps            = { 
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
                                        #Army Equip:
                                        2000
                                        2010
                                        2300
                                        2400
                                        2200 2210
                                        2500
                                        2600
                                        2700
                                        2800 2810
                                        #Land Docs
					6010 6020 
					6910
					6100 6110 6120
                                        6160
					6600 6610
					#Army Org
                                        1000
                                        1010
                                        1500
                                        1300
					1260
					1980
					1900
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 9
    political_left    = 4
    free_market       = 7
    freedom           = 5
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 5
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 12000 id = 1 }
    location = 2088
    name     = "I Corps"
    division =
    { id            = { type = 12000 id = 2 }
      name          = "1st Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id       = { type = 12000 id = 3 }
      name     = "2nd Infantry Brigade"
      strength = 100
      type     = mechanized
      model    = 1
    }
  }
}
