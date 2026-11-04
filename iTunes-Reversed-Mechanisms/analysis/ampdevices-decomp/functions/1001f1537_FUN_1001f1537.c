// name: FUN_1001f1537
// address: 1001f1537

int FUN_1001f1537(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int local_34;
  
  local_34 = 0;
  iVar1 = FUN_1001f17b2();
  iVar2 = -1;
  if (iVar1 == 0) {
    uVar5 = (ulong)local_34;
    iVar1 = FUN_1001f17b2(param_1,param_2);
    if (iVar1 == 0) {
      lVar6 = (long)local_34;
      iVar1 = FUN_1001f17b2(param_1,param_2);
      if (iVar1 == 0) {
        lVar4 = (long)local_34;
        iVar2 = FUN_1001f17b2(param_1,param_2,&local_34);
        lVar3 = 0;
        if (iVar2 == 0) {
          lVar3 = (long)local_34 * 0x1000000 + (lVar6 << 8 | uVar5 | lVar4 << 0x10);
        }
        goto LAB_1001f159c;
      }
    }
  }
  lVar3 = 0;
LAB_1001f159c:
  *param_3 = lVar3;
  return iVar2;
}

