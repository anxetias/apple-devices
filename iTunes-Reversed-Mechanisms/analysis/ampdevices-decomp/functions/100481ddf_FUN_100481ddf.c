// name: FUN_100481ddf
// address: 100481ddf

void FUN_100481ddf(undefined8 param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined1 local_38 [16];
  
  FUN_1001b7a44();
  if (999 < param_2) {
    do {
      FUN_1001b7b04(local_38,"M");
      FUN_1001bbcfe(param_1,local_38);
      FUN_1001b7a50(local_38);
      param_2 = param_2 - 1000;
    } while (999 < (param_2 & 0xffff));
  }
  uVar1 = param_2 & 0xffff;
  if (uVar1 < 900) {
    if (uVar1 < 500) {
      if (399 < uVar1) {
        FUN_1001b7b04(local_38,"CD");
        FUN_1001bbcfe(param_1,local_38);
        FUN_1001b7a50(local_38);
        param_2 = param_2 - 400;
        goto LAB_100481f1e;
      }
    }
    else {
      FUN_1001b7b04(local_38,"D");
      FUN_1001bbcfe(param_1,local_38);
      FUN_1001b7a50(local_38);
      param_2 = param_2 - 500;
    }
    if (99 < (ushort)param_2) {
      do {
        FUN_1001b7b04(local_38,"C");
        FUN_1001bbcfe(param_1,local_38);
        FUN_1001b7a50(local_38);
        param_2 = param_2 - 100;
      } while (99 < (ushort)param_2);
    }
  }
  else {
    FUN_1001b7b04(local_38,"CM");
    FUN_1001bbcfe(param_1,local_38);
    FUN_1001b7a50(local_38);
    param_2 = param_2 - 900;
  }
LAB_100481f1e:
  uVar2 = (ushort)param_2;
  if (uVar2 < 0x5a) {
    if (uVar2 < 0x32) {
      if (0x27 < uVar2) {
        FUN_1001b7b04(local_38,"XL");
        FUN_1001bbcfe(param_1,local_38);
        FUN_1001b7a50(local_38);
        param_2 = param_2 - 0x28;
        goto LAB_100481ff2;
      }
    }
    else {
      FUN_1001b7b04(local_38,"L");
      FUN_1001bbcfe(param_1,local_38);
      FUN_1001b7a50(local_38);
      param_2 = param_2 - 0x32;
    }
    if (9 < (ushort)param_2) {
      do {
        FUN_1001b7b04(local_38,"X");
        FUN_1001bbcfe(param_1,local_38);
        FUN_1001b7a50(local_38);
        param_2 = param_2 - 10;
      } while (9 < (ushort)param_2);
    }
  }
  else {
    FUN_1001b7b04(local_38,"XC");
    FUN_1001bbcfe(param_1,local_38);
    FUN_1001b7a50(local_38);
    param_2 = param_2 - 0x5a;
  }
LAB_100481ff2:
  uVar2 = (ushort)param_2;
  if (uVar2 == 9) {
    FUN_1001b7b04(local_38,"IX");
    FUN_1001bbcfe(param_1,local_38);
LAB_100482015:
    FUN_1001b7a50(local_38);
  }
  else {
    if (uVar2 < 5) {
      if (uVar2 == 4) {
        FUN_1001b7b04(local_38,"IV");
        FUN_1001bbcfe(param_1,local_38);
        goto LAB_100482015;
      }
    }
    else {
      FUN_1001b7b04(local_38,"V");
      FUN_1001bbcfe(param_1,local_38);
      FUN_1001b7a50(local_38);
      param_2 = param_2 - 5;
    }
    if ((short)param_2 != 0) {
      do {
        FUN_1001b7b04(local_38,"I");
        FUN_1001bbcfe(param_1,local_38);
        FUN_1001b7a50(local_38);
        uVar2 = (short)param_2 - 1;
        param_2 = (uint)uVar2;
      } while (uVar2 != 0);
    }
  }
  return;
}

