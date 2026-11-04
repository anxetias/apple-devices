// name: FUN_1004e9c24
// address: 1004e9c24

undefined1 FUN_1004e9c24(undefined8 param_1,undefined2 *param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_1004e9858(param_1,0);
  if (0x4d34561f < iVar1) {
    if (iVar1 < 0x57415645) {
      if (iVar1 < 0x4d504732) {
        if (iVar1 == 0x4d345620) {
          pcVar2 = "m4v";
        }
        else {
          if (iVar1 != 0x4d503420) {
LAB_1004e9e4e:
            *param_2 = 0;
            return 0;
          }
          pcVar2 = "mp4";
        }
      }
      else if (iVar1 + 0xb2afb8ceU < 2) {
        pcVar2 = "mp3";
      }
      else if (iVar1 == 0x4d6f6f56) {
        pcVar2 = "mov";
      }
      else {
        if (iVar1 != 0x50444620) goto LAB_1004e9e4e;
        pcVar2 = "pdf";
      }
    }
    else if (iVar1 < 0x69626f6f) {
      if (iVar1 == 0x57415645) {
        pcVar2 = "wav";
      }
      else if (iVar1 == 0x574d4120) {
        pcVar2 = "wma";
      }
      else {
        if (iVar1 != 0x666c6163) goto LAB_1004e9e4e;
        pcVar2 = "flac";
      }
    }
    else if (iVar1 == 0x69626f6f) {
      pcVar2 = "ibooks";
    }
    else if (iVar1 == 0x69746520) {
      pcVar2 = "ite";
    }
    else {
      if (iVar1 != 0x69746c70) goto LAB_1004e9e4e;
      pcVar2 = "itlp";
    }
    goto LAB_1004e9e3a;
  }
  if (0x41554457 < iVar1) {
    if (iVar1 < 0x4d344220) {
      if (iVar1 == 0x41554458) {
        pcVar2 = "aax";
      }
      else if (iVar1 == 0x45505542) {
        pcVar2 = "epub";
      }
      else {
        if (iVar1 != 0x4d344120) goto LAB_1004e9e4e;
        pcVar2 = "m4a";
      }
    }
    else if (iVar1 == 0x4d344220) {
      pcVar2 = "m4b";
    }
    else if (iVar1 == 0x4d345020) {
      pcVar2 = "m4p";
    }
    else {
      if (iVar1 != 0x4d345220) goto LAB_1004e9e4e;
      pcVar2 = "m4r";
    }
    goto LAB_1004e9e3a;
  }
  if (iVar1 < 0x33677070) {
    if (iVar1 != 0x33673220) {
      if (iVar1 == 0x33677020) goto LAB_1004e9dd0;
      if (iVar1 != 0x33677032) goto LAB_1004e9e4e;
    }
    pcVar2 = "3g2";
  }
  else {
    if (iVar1 != 0x33677070) {
      if (iVar1 == 0x41494646) {
        pcVar2 = "aif";
      }
      else {
        if (iVar1 != 0x41554442) goto LAB_1004e9e4e;
        pcVar2 = "aa";
      }
      goto LAB_1004e9e3a;
    }
LAB_1004e9dd0:
    pcVar2 = "3gp";
  }
LAB_1004e9e3a:
  FUN_1001e04f5(pcVar2,param_2);
  return 1;
}

