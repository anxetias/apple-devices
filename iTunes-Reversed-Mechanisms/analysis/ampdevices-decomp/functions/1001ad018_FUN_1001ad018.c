// name: FUN_1001ad018
// address: 1001ad018

bool FUN_1001ad018(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = FUN_1001acfc8();
  cVar2 = _CFCharacterSetIsCharacterMember(uVar1,param_2);
  return cVar2 != '\0';
}

