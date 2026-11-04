// name: FUN_10011530e
// address: 10011530e

undefined8 FUN_10011530e(long *param_1,long *param_2,ulong param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  param_3 = param_3 & 0xffffffff;
  uVar1 = *(undefined1 *)((long)param_1 + 0xaa);
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = FUN_100105f68(0x7910);
  *param_2 = lVar2;
  param_2[1] = (long)(param_1 + param_3 * 0x23 + 0x167d);
  *(undefined1 *)(lVar2 + 0x7901) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(long **)(lVar2 + 0x20) = param_1 + param_3 * 0x18 + 0x185a;
  *(long **)(lVar2 + 0x28) = param_1 + param_3 * 0x18 + 0x197a;
  *(undefined8 *)(lVar2 + 0x30) = 0x100000000;
  (**(code **)(*param_1 + 0x58))(param_1,param_2[1],uVar1);
  return 0;
}

