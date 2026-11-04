// name: FUN_100244e08
// address: 100244e08

int FUN_100244e08(undefined8 param_1,int param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  
  *param_3 = '\0';
  iVar1 = (int)param_1;
  if (param_2 < 0x70687669) {
    if (param_2 < 0x6372746c) {
      if (param_2 < 0x626f6b70) {
        if (param_2 < 0x61707061) {
          if (param_2 == 0x61697266) {
            pcVar2 = "AirFair";
          }
          else {
            if (param_2 != 0x6169726c) {
              return -0x32;
            }
            pcVar2 = "Airlock";
          }
          FUN_1001dfbb3(pcVar2,param_3,0x100);
          return 0;
        }
        if (param_2 == 0x61707061) {
          pcVar2 = "ApplicationArchives";
          goto LAB_100245467;
        }
        if (param_2 != 0x61727477) {
          return -0x32;
        }
        pcVar2 = "iTunes_Control";
        if (iVar1 == 0x69506f64) {
          pcVar2 = "iPod_Control";
        }
        FUN_1001df1e7(pcVar2,param_3,0x100);
        pcVar2 = "Artwork";
      }
      else {
        if (0x63617373 < param_2) {
          if (param_2 == 0x63617374) {
            pcVar2 = "Podcasts";
          }
          else if (param_2 == 0x636c6472) {
            pcVar2 = "Calendars";
          }
          else {
            if (param_2 != 0x636e7478) {
              return -0x32;
            }
            pcVar2 = "Contacts";
          }
          goto LAB_100245467;
        }
        if (param_2 != 0x626f6b70) {
          if (param_2 != 0x626f6f6b) {
            return -0x32;
          }
          pcVar2 = "Books";
          goto LAB_100245467;
        }
        FUN_1001df1e7("Books",param_3,0x100);
        pcVar2 = "Purchases";
      }
    }
    else if (param_2 < 0x67616d65) {
      if (param_2 < 0x64766365) {
        if (param_2 == 0x6372746c) {
          pcVar2 = "iTunes_Control";
          if (iVar1 == 0x69506f64) {
            pcVar2 = "iPod_Control";
          }
        }
        else {
          if (param_2 != 0x6463696d) {
            return -0x32;
          }
          pcVar2 = "DCIM";
        }
        goto LAB_100245467;
      }
      if (param_2 == 0x64766365) {
        pcVar2 = "iTunes_Control";
        if (iVar1 == 0x69506f64) {
          pcVar2 = "iPod_Control";
        }
        FUN_1001df1e7(pcVar2,param_3,0x100);
        pcVar2 = "Device";
      }
      else if (param_2 == 0x66756c6c) {
        FUN_1001df1e7("Photos",param_3,0x100);
        pcVar2 = "Full Resolution";
      }
      else {
        if (param_2 != 0x67616d64) {
          return -0x32;
        }
        pcVar2 = "iTunes_Control";
        if (iVar1 == 0x69506f64) {
          pcVar2 = "iPod_Control";
        }
        FUN_1001df1e7(pcVar2,param_3,0x100);
        pcVar2 = "GameData_RW";
      }
    }
    else if (param_2 < 0x6974756e) {
      if (param_2 == 0x67616d65) {
        pcVar2 = "iTunes_Control";
        if (iVar1 == 0x69506f64) {
          pcVar2 = "iPod_Control";
        }
        FUN_1001df1e7(pcVar2,param_3,0x100);
        pcVar2 = "Games_RO";
      }
      else {
        if (param_2 != 0x67616d73) {
          return -0x32;
        }
        pcVar2 = "iTunes_Control";
        if (iVar1 == 0x69506f64) {
          pcVar2 = "iPod_Control";
        }
        FUN_1001df1e7(pcVar2,param_3,0x100);
        pcVar2 = "GameStats_WO";
      }
    }
    else if (param_2 == 0x6974756e) {
      pcVar2 = "iTunes_Control";
      if (iVar1 == 0x69506f64) {
        pcVar2 = "iPod_Control";
      }
      FUN_1001df1e7(pcVar2,param_3,0x100);
      pcVar2 = "iTunes";
    }
    else {
      if (param_2 != 0x6c69636e) {
        if (param_2 != 0x6d656d6f) {
          return -0x32;
        }
        pcVar2 = "Recordings";
        goto LAB_100245467;
      }
      pcVar2 = "iTunes_Control";
      if (iVar1 == 0x69506f64) {
        pcVar2 = "iPod_Control";
      }
      FUN_1001df1e7(pcVar2,param_3,0x100);
      pcVar2 = "Licenses";
    }
    goto LAB_10024544d;
  }
  if (param_2 < 0x73796170) {
    if (param_2 < 0x72657374) {
      if (0x70756272 < param_2) {
        if (param_2 == 0x70756273) {
          pcVar2 = "PublicStaging";
        }
        else {
          if (param_2 != 0x70757263) {
            return -0x32;
          }
          pcVar2 = "Purchases";
        }
        goto LAB_100245467;
      }
      if (param_2 != 0x70687669) {
        if (param_2 != 0x70696374) {
          return -0x32;
        }
        pcVar2 = "Photos";
        goto LAB_100245467;
      }
      FUN_1001df1e7("Photos",param_3,0x100);
      pcVar2 = "Videos";
    }
    else if (param_2 < 0x726f6f74) {
      if (param_2 == 0x72657374) {
        pcVar2 = "iTunesRestore";
        goto LAB_100245467;
      }
      if (param_2 != 0x72696e67) {
        return -0x32;
      }
      pcVar2 = "iTunes_Control";
      if (iVar1 == 0x69506f64) {
        pcVar2 = "iPod_Control";
      }
      FUN_1001df1e7(pcVar2,param_3,0x100);
      pcVar2 = "Ringtones";
    }
    else {
      if (param_2 == 0x726f6f74) {
        return 0;
      }
      if (param_2 == 0x736f6e67) {
        pcVar2 = "iTunes_Control";
        if (iVar1 == 0x69506f64) {
          pcVar2 = "iPod_Control";
        }
        FUN_1001df1e7(pcVar2,param_3,0x100);
        pcVar2 = "Music";
      }
      else {
        if (param_2 != 0x73706368) {
          return -0x32;
        }
        pcVar2 = "iTunes_Control";
        if (iVar1 == 0x69506f64) {
          pcVar2 = "iPod_Control";
        }
        FUN_1001df1e7(pcVar2,param_3,0x100);
        pcVar2 = "Speakable";
      }
    }
    goto LAB_10024544d;
  }
  if (param_2 < 0x73796e63) {
    if (param_2 == 0x73796170) {
      FUN_1001df1e7("PublicStaging",param_3,0x100);
      pcVar2 = "ApplicationSync";
    }
    else {
      if (param_2 != 0x73796e61) {
        if (param_2 != 0x73796e62) {
          return -0x32;
        }
        pcVar2 = "Books";
        goto LAB_100245439;
      }
      FUN_1001dfbb3("AirFair",param_3,0x100);
      pcVar2 = "sync";
    }
    goto LAB_10024544d;
  }
  switch(param_2) {
  case 0x73796e6d:
    iVar1 = FUN_100244e08(param_1,0x73796e63,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    pcVar2 = "Media";
    break;
  case 0x73796e6e:
  case 0x73796e6f:
  case 0x73796e71:
  case 0x73796e73:
  case 0x73796e74:
  case 0x73796e75:
    return -0x32;
  case 0x73796e70:
    pcVar2 = "Photos";
    goto LAB_100245439;
  case 0x73796e72:
    iVar1 = FUN_100244e08(param_1,0x72696e67,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    goto LAB_100245446;
  case 0x73796e76:
    pcVar2 = "Recordings";
LAB_100245439:
    FUN_1001df1e7(pcVar2,param_3,0x100);
LAB_100245446:
    pcVar2 = "Sync";
    break;
  default:
    if (param_2 == 0x73796e63) {
      pcVar2 = "iTunes_Control";
      if (iVar1 == 0x69506f64) {
        pcVar2 = "iPod_Control";
      }
      goto LAB_100245439;
    }
    if (param_2 != 0x74686d62) {
      return -0x32;
    }
    FUN_1001df1e7("Photos",param_3,0x100);
    pcVar2 = "Thumbs";
  }
LAB_10024544d:
  if (*param_3 != '\0') {
    FUN_1001df1e7("/",param_3,0x100);
  }
LAB_100245467:
  FUN_1001df1e7(pcVar2,param_3,0x100);
  return 0;
}

