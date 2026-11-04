// name: FUN_1004926ee
// address: 1004926ee

int FUN_1004926ee(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_100353146(param_1,0);
  if (lVar1 == 0) {
    iVar2 = 1;
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = *(undefined1 *)(lVar1 + 0x1c);
    }
    iVar2 = *(int *)(lVar1 + 0x18);
    FUN_100352999(lVar1);
  }
  return iVar2 + (uint)(iVar2 == 0);
}

