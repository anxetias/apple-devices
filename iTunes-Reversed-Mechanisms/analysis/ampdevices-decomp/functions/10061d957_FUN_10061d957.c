// name: FUN_10061d957
// address: 10061d957

bool FUN_10061d957(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_1004744bf(param_1,0);
  cVar1 = FUN_1002bd328(param_1);
  return (uVar2 & 0x200005) == 1 && cVar1 != '\0';
}

