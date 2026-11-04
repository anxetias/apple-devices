// name: FUN_1002cdcea
// address: 1002cdcea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002cdcea(void)

{
  long lVar1;
  undefined8 uVar2;
  char acStack_28 [4];
  char acStack_24 [4];
  char acStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (DAT_1008c5d6a != '\0') {
    return 0;
  }
  DAT_1008c5d6a = 1;
  acStack_28 = (char  [4])s_cneahcaalppa_100740cc0._0_4_;
  acStack_24 = (char  [4])s_cneahcaalppa_100740cc0._4_4_;
  acStack_20 = (char  [4])s_cneahcaalppa_100740cc0._8_4_;
  uStack_1c = ram0x000100740ccc;
  uStack_18 = 0;
  lVar1 = _dlopen("/System/Library/Components/AudioCodecs.component/Contents/MacOS/AudioCodecs",5);
  if ((lVar1 != 0) && (lVar1 = _dlsym(lVar1,"ACMP4AACHighEfficiencyEncoderEntry"), lVar1 != 0)) {
    uVar2 = _RegisterComponent(acStack_28,lVar1,0,0,0,0);
    return uVar2;
  }
  return 0;
}

