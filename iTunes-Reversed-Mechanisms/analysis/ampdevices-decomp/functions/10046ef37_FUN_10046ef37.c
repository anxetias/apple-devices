// name: FUN_10046ef37
// address: 10046ef37

int FUN_10046ef37(undefined4 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  
  FUN_10046eb3e();
  iVar2 = 0;
  for (puVar3 = DAT_1008c76a8; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
    cVar1 = FUN_1003b6f88(*(undefined4 *)(puVar3 + 0x269),(long)puVar3 + 0x134c,param_1,param_2);
    iVar2 = (iVar2 + 1) - (uint)(cVar1 == '\0');
  }
  FUN_1001e9eb9(&DAT_1008c76b8);
  return iVar2;
}

