// name: FUN_1003a5510
// address: 1003a5510

undefined8 FUN_1003a5510(long param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  cVar2 = FUN_100474865(*param_2);
  *(char *)(lVar1 + 0xe5) = cVar2;
  uVar3 = 0x2349;
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  return uVar3;
}

