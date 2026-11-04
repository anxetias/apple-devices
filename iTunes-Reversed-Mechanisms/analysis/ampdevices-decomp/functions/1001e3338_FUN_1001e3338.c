// name: FUN_1001e3338
// address: 1001e3338

undefined4 FUN_1001e3338(char *param_1)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined8 uStack_18;
  
  uStack_18 = (ulong)in_EAX;
  if (param_1 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = _sscanf(param_1,"%d",(long)&uStack_18 + 4);
    uVar2 = 0;
    if (iVar1 == 1) {
      uVar2 = uStack_18._4_4_;
    }
  }
  return uVar2;
}

