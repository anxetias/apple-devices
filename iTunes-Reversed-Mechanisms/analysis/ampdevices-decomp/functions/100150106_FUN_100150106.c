// name: FUN_100150106
// address: 100150106

undefined4 FUN_100150106(undefined8 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_1001b9b0c(param_1,"song",1);
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_1001b9b0c(param_1,"book",1);
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    else {
      iVar1 = FUN_1001b9b0c(param_1,"ebook",1);
      if (iVar1 == 0) {
        uVar3 = 0x19;
      }
      else {
        iVar1 = FUN_1001b9b0c(param_1,"pdf",1);
        if (iVar1 == 0) {
          uVar3 = 5;
        }
        else {
          iVar1 = FUN_1001b9b0c(param_1,"pdf-book",1);
          if (iVar1 == 0) {
            uVar3 = 0x1a;
          }
          else {
            iVar1 = FUN_1001b9b0c(param_1,"movie",1);
            uVar3 = 6;
            if ((iVar1 != 0) && (iVar1 = FUN_1001b9b0c(param_1,"music-video",1), iVar1 != 0)) {
              iVar1 = FUN_1001b9b0c(param_1,"feature-movie",1);
              if (iVar1 == 0) {
                uVar2 = 0xf;
                uVar3 = 9;
              }
              else {
                iVar1 = FUN_1001b9b0c(param_1,"episode",1);
                if (iVar1 == 0) {
                  return 7;
                }
                iVar1 = FUN_1001b9b0c(param_1,"podcast-episode",1);
                if (iVar1 == 0) {
                  return 7;
                }
                iVar1 = FUN_1001b9b0c(param_1,"tv-episode",1);
                if (iVar1 != 0) {
                  iVar1 = FUN_1001b9b0c(param_1,"podcast",1);
                  if (iVar1 == 0) {
                    return 8;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"album",1);
                  if (iVar1 == 0) {
                    return 3;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"work",1);
                  if (iVar1 == 0) {
                    return 4;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"interactive-booklet",1);
                  if (iVar1 == 0) {
                    return 0xb;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"software-package",1);
                  if (iVar1 == 0) {
                    return 0xc;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"software",1);
                  if (iVar1 == 0) {
                    return 0x12;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"software-game",1);
                  if (iVar1 == 0) {
                    return 0x14;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"software-upgrade",1);
                  if (iVar1 == 0) {
                    return 0x13;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"coached-audio",1);
                  if (iVar1 == 0) {
                    return 0xd;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"audio-pass",1);
                  if (iVar1 == 0) {
                    return 0x15;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"video-pass",1);
                  if (iVar1 == 0) {
                    return 0x16;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"itunesu",1);
                  if (iVar1 == 0) {
                    return 0x17;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"itunesu-episode",1);
                  if (iVar1 == 0) {
                    return 0x18;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"ringtone",1);
                  if (iVar1 == 0) {
                    return 0xe;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"tone",1);
                  if (iVar1 == 0) {
                    return 0x1b;
                  }
                  iVar1 = FUN_1001b9b0c(param_1,"media-archive",1);
                  if (iVar1 != 0) {
                    iVar1 = FUN_1001b9b0c(param_1,"uploadedAudio",1);
                    if (iVar1 == 0) {
                      return 0x22;
                    }
                    iVar1 = FUN_1001b9b0c(param_1,"uploadedVideo",1);
                    if (iVar1 == 0) {
                      return 0x23;
                    }
                    return 0;
                  }
                  return 0x11;
                }
                uVar2 = 0x10;
                uVar3 = 10;
              }
              if (param_2 != '\0') {
                uVar3 = uVar2;
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}

