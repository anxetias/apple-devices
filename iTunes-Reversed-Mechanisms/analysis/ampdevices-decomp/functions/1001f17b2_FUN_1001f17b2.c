// name: FUN_1001f17b2
// address: 1001f17b2

int FUN_1001f17b2(long param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  undefined8 in_RAX;
  byte local_21;
  
  local_21 = (byte)((ulong)in_RAX >> 0x38);
  iVar1 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,&local_21,1);
  if (iVar1 == 1) {
    *param_3 = (uint)local_21;
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}

