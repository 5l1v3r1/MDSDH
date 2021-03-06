
##############################
# Country definition for U84 #
##############################

country =
{ tag                 = U84
  control             = FRA
  puppet              = FRA
  # Resource Reserves
  energy              = 1000
  metal               = 500
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 20
  manpower            = 20
  capital             = 920
  diplomacy           = { }
  SpyInfo                = {  country = "U84" NumberOfSpies = 3  } 
   nationalprovinces      = {  920 921 922 924  } 
   ownedprovinces         = {  920 921 922 924  } 
   controlledprovinces    = {  920 921 922 924  } 
  techapps            = {
                                        #Industry:
                                        5010
                                        5020
                                        5030
                                        5040
                                        5050
                                        5070
                                        5090
                                        #Army Equip:
                                        2400
                                        2300
                                        2200
                                        2500
                                        2600
                                        2700
                                        2800
                                        #Army Org:
                                        1300
                                        1500
                                        1900
                                        1260
                                        1970
                                        #Army Doc:
                                        6100
                                        6110
                                        6160
                                        6010
                                        6020
                                        6600
                                        6610
                                        6910
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 5
    political_left    = 5
    free_market       = 5
    freedom           = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 12261 id = 1 }
    location = 920
    name     = "Arm�e Nationale Tchadienne"
    division =
    { id            = { type = 12261 id = 2 }
      name          = "1st Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
    division =
    { id            = { type = 12261 id = 3 }
      name          = "1st Brigade"
      strength      = 100
      type          = cavalry
      model         = 0
    }
  }
}
