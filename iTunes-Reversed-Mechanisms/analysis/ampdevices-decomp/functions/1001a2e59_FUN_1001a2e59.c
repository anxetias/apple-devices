// name: FUN_1001a2e59
// address: 1001a2e59

undefined1 FUN_1001a2e59(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  FUN_1001b7a44(local_38);
  cVar1 = FUN_1001a29f2(param_1,"Transfer-Encoding",local_38);
  if (cVar1 != '\0') {
    FUN_1001b7b04(local_28,"chunked");
    iVar2 = FUN_1001b96de(local_38,local_28,0x1b1);
    FUN_1001b7a50(local_28);
    if (iVar2 == 0) {
      uVar3 = 1;
      goto LAB_1001a2ebc;
    }
  }
  uVar3 = 0;
LAB_1001a2ebc:
  FUN_1001b7a50(local_38);
  return uVar3;
}

