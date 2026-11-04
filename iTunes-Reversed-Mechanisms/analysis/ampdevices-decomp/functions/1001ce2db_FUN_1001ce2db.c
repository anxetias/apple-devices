// name: FUN_1001ce2db
// address: 1001ce2db

int FUN_1001ce2db(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint in_R8D;
  undefined8 in_R9;
  ulong uVar4;
  undefined4 *in_stack_00000008;
  
  uVar4 = 0;
  iVar1 = FUN_1001ce017();
  if (iVar1 == 0) {
    uVar2 = FUN_100170ef7(0);
    uVar4 = (ulong)in_R8D;
    if ((long)uVar2 < (long)(ulong)in_R8D) {
      uVar4 = uVar2;
    }
    uVar3 = FUN_100170f3b(0);
    FUN_1001c631b(uVar3,in_R9,uVar4);
  }
  FUN_10017060f(0);
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = (int)uVar4;
  }
  return iVar1;
}

