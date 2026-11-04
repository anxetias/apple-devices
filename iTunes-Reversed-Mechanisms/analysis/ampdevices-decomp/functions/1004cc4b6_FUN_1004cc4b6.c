// name: FUN_1004cc4b6
// address: 1004cc4b6

void FUN_1004cc4b6(int *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint local_12c;
  char local_128;
  undefined1 local_127 [263];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*param_1 != 0) || ((char)param_1[0x406] == '\0')) goto LAB_1004cc5ed;
  iVar3 = 0xff;
  if (param_3 < 0xff) {
    iVar3 = param_3;
  }
  piVar1 = param_1 + 0x406;
  local_128 = (char)iVar3;
  FUN_1001c631b(param_2,local_127,(long)iVar3);
  cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#PACKAGEID#",1);
  if (cVar2 == '\0') {
    cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#SERVER#NETNAME#",1);
    if (cVar2 == '\0') {
      cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#SERVER#LOCATION#",1);
      if (cVar2 == '\0') {
        cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#TRACKLIST#LISTID#",1);
        if (cVar2 == '\0') {
          cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#TRACKLIST#TRACK#TRACKID#",1);
          if (cVar2 == '\0') {
            cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#TRACKLIST#TRACK#DIR#",1);
            if (cVar2 == '\0') {
              cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#TRACKLIST#TRACK#TITLE#",1);
              if (cVar2 == '\0') {
                cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#TRACKLIST#TRACK#ALBUM#",1);
                if (cVar2 == '\0') {
                  cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#TRACKLIST#TRACK#ARTIST#",1);
                  if (cVar2 == '\0') {
                    cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#TRACKLIST#TRACK#GENRE#",1);
                    if (cVar2 == '\0') {
                      cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#TRACKLIST#TRACK#FILENAME#",1);
                      if (cVar2 == '\0') {
                        cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#TRACKLIST#TRACK#SIZE#",1);
                        if (cVar2 != '\0') {
                          if (local_128 != '\0') {
                            FUN_1001e3108(&local_128,&local_12c);
                            *(ulong *)(param_1 + 0xbdc) = (ulong)local_12c;
                          }
                          goto LAB_1004cc5ed;
                        }
                        cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#TRACKLIST#TRACK#FORMAT#",1);
                        if (cVar2 == '\0') {
                          cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#TRACKLIST#TRACK#QUALITY#",1);
                          if (cVar2 == '\0') {
                            cVar2 = FUN_1001e36e8(piVar1,"PACKAGE#TRACKLIST#TRACK#DURATION#",1);
                            if ((cVar2 != '\0') && (local_128 != '\0')) {
                              FUN_1001e3108(&local_128,param_1 + 0xa4b);
                              param_1[0xa4b] = param_1[0xa4b] * 1000;
                            }
                          }
                          else if (local_128 != '\0') {
                            FUN_1001e3108(&local_128,&local_12c);
                            param_1[0xa50] = (int)local_12c / 1000;
                          }
                          goto LAB_1004cc5ed;
                        }
                        param_1 = param_1 + 0x5c6;
                      }
                      else {
                        param_1 = param_1 + 0x586;
                      }
                      goto LAB_1004cc5de;
                    }
                    param_1 = param_1 + 0x848;
                  }
                  else {
                    param_1 = param_1 + 0x748;
                  }
                }
                else {
                  param_1 = param_1 + 0x7c8;
                }
              }
              else {
                param_1 = param_1 + 0x648;
              }
              FUN_1001e4f4b(&local_128,param_1);
              goto LAB_1004cc5ed;
            }
            param_1 = param_1 + 0x606;
          }
          else {
            param_1 = param_1 + 0x546;
          }
        }
        else {
          param_1 = param_1 + 0x506;
        }
      }
      else {
        param_1 = param_1 + 0x486;
      }
    }
    else {
      param_1 = param_1 + 0x446;
    }
  }
  else {
    param_1 = param_1 + 0x4c6;
  }
LAB_1004cc5de:
  FUN_1001dfc9d(&local_128,param_1);
LAB_1004cc5ed:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

