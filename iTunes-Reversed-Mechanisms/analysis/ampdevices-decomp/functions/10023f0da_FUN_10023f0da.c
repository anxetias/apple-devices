// name: FUN_10023f0da
// address: 10023f0da

void FUN_10023f0da(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 in_register_00000004;
  undefined8 uVar2;
  undefined8 local_38;
  
  local_38 = CONCAT44(in_register_00000004,in_EAX);
  iVar1 = _PasteboardGetItemIdentifier(*(undefined8 *)(param_1 + 0x78),param_2,&local_38);
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    param_2 = local_38;
  }
  else {
    if (iVar1 != -0x622b) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x78);
  }
  _PasteboardPutItemFlavor(uVar2,param_2,param_3,param_4,param_5);
  return;
}

