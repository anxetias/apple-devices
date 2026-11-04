// name: FUN_1001323f8
// address: 1001323f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001323f8(undefined8 param_1,long param_2,char param_3,char param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48 [2];
  undefined1 local_38 [16];
  
  FUN_1001b7b04(local_48,"/");
  FUN_1001b7a5c(local_38,param_2);
  FUN_1001bbcfe(local_38,local_48);
  FUN_1001b7a5c(param_1,local_38);
  FUN_1001bbcfe(param_1,param_2 + 0x10);
  FUN_1001b7a50(local_38);
  FUN_1001b7a50(local_48);
  FUN_1001b7b04(local_38," (Macintosh; OS X ");
  FUN_1001bbcfe(param_1,local_38);
  FUN_1001b7a50(local_38);
  FUN_1001eb60a(local_38);
  FUN_1001bbcfe(param_1,local_38);
  FUN_1001b7a50(local_38);
  FUN_1001b7b04(local_38,")");
  FUN_1001bbcfe(param_1,local_38);
  FUN_1001b7a50(local_38);
  if (param_4 != '\0') {
    FUN_1001b7a5c(local_58,param_2 + 0x60);
    cVar1 = FUN_1001b8428(local_58);
    if (cVar1 != '\0') {
      FUN_1001b7a44(local_38);
      lVar2 = _CFBundleGetBundleWithIdentifier(&cf_com_apple_WebKit);
      if (lVar2 != 0) {
        uVar3 = FUN_100174de7(lVar2);
        FUN_100166f9c(local_48,uVar3,*(undefined8 *)PTR__kCFBundleVersionKey_10082e058);
        FUN_1001b80b2(local_38,local_48);
        FUN_1001b7a50(local_48);
        local_48[0] = 0;
        FUN_1001bb856(local_38,local_48);
        if (999 < (int)local_48[0]) {
          auVar4._0_8_ = _log10((double)(int)local_48[0] / _DAT_100708b48);
          auVar4._8_8_ = extraout_XMM0_Qb;
          auVar4 = roundsd(auVar4,auVar4,9);
          FUN_1001ba6e0(local_48,local_38,(long)(int)(auVar4._0_8_ + DAT_100700458),
                        0xffffffffffffffff);
          FUN_1001b80b2(local_38,local_48);
          FUN_1001b7a50(local_48);
        }
      }
      FUN_1001b7a5c(local_68,local_38);
      FUN_1001b7a50(local_38);
      FUN_1001b80b2(local_58,local_68);
      FUN_1001b7a50(local_68);
    }
    cVar1 = FUN_1001b8428(local_58);
    if (cVar1 == '\0') {
      FUN_1001b7b04(local_38," ");
      FUN_1001bbcfe(param_1,local_38);
      FUN_1001b7a50(local_38);
      FUN_1001b7b04(local_38,"AppleWebKit");
      FUN_1001bbcfe(param_1,local_38);
      FUN_1001b7a50(local_38);
      FUN_1001b7b04(local_38,"/");
      FUN_1001bbcfe(param_1,local_38);
      FUN_1001b7a50(local_38);
      FUN_1001bbcfe(param_1,local_58);
    }
    FUN_1001b7a50(local_58);
  }
  if (param_3 != '\0') {
    cVar1 = FUN_1001b8428(param_2 + 0x20);
    if (cVar1 == '\0') {
      FUN_1001b7b04(local_38," ");
      FUN_1001bbcfe(param_1,local_38);
      FUN_1001b7a50(local_38);
      FUN_1001bbcfe(param_1,param_2 + 0x20);
    }
    if (*(short *)(param_2 + 0x70) != 0) {
      FUN_1001b7b04(local_38," build/");
      FUN_1001bbcfe(param_1,local_38);
      FUN_1001b7a50(local_38);
      FUN_1001bb832(local_38,*(undefined2 *)(param_2 + 0x70));
      FUN_1001bbcfe(param_1,local_38);
      FUN_1001b7a50(local_38);
    }
    if (*(char *)(param_2 + 0x72) == '\x01') {
      FUN_1001b7b04(local_38," bk/AI");
      FUN_1001bbcfe(param_1,local_38);
      FUN_1001b7a50(local_38);
    }
    cVar1 = FUN_1001b8428(param_2 + 0x30);
    if (cVar1 == '\0') {
      FUN_1001b7b04(local_58," (dt:");
      FUN_1001b7a5c(local_48,local_58);
      FUN_1001bbcfe(local_48,param_2 + 0x30);
      FUN_1001b7b04(local_68,")");
      FUN_1001b7a5c(local_38,local_48);
      FUN_1001bbcfe(local_38,local_68);
      FUN_1001bbcfe(param_1,local_38);
      FUN_1001b7a50(local_38);
      FUN_1001b7a50(local_68);
      FUN_1001b7a50(local_48);
      FUN_1001b7a50(local_58);
    }
  }
  cVar1 = FUN_1001b8428(param_2 + 0x50);
  if (cVar1 == '\0') {
    FUN_1001b7b04(local_38," ");
    FUN_1001bbcfe(param_1,local_38);
    FUN_1001b7a50(local_38);
    FUN_1001bbcfe(param_1,param_2 + 0x50);
  }
  return param_1;
}

