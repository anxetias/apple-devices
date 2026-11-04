// name: FUN_1001a2dbb
// address: 1001a2dbb

undefined1 FUN_1001a2dbb(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  FUN_1001b7a44(local_38);
  cVar1 = FUN_1001a29f2(param_1,"Content-Range",local_38);
  if (cVar1 != '\0') {
    FUN_1001b7b04(local_28,"bytes");
    cVar1 = FUN_1001ba114(local_38,local_28,0);
    FUN_1001b7a50(local_28);
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_1001a2e1f;
  }
  uVar2 = 0;
LAB_1001a2e1f:
  FUN_1001b7a50(local_38);
  return uVar2;
}

