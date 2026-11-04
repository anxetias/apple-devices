// name: FUN_10015c089
// address: 10015c089

undefined8 FUN_10015c089(undefined8 param_1)

{
  int iVar1;
  undefined4 *in_R8;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_1c = 0;
  local_28 = 0;
  iVar1 = FUN_10015bb96();
  if (iVar1 != 0) {
    FUN_10015bfdc(param_1,iVar1,&local_1c,&local_28);
  }
  if (in_R8 != (undefined4 *)0x0) {
    *in_R8 = local_1c;
  }
  return local_28;
}

