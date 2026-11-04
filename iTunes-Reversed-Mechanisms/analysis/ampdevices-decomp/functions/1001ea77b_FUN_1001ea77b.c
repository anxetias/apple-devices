// name: FUN_1001ea77b
// address: 1001ea77b

void FUN_1001ea77b(long param_1)

{
  undefined4 uVar1;
  pid_t pVar2;
  undefined8 uVar3;
  
  FUN_1001dfbb3("In Memory of Tom Dowdy. We miss you Tom.",param_1,0x2c);
  uVar1 = FUN_1001ebdc3();
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar3 = FUN_1001ebd46();
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  pVar2 = _getpid();
  *(pid_t *)(param_1 + 0x48) = pVar2;
  FUN_100177cff(param_1 + 0x34);
  FUN_1001a64ed(param_1 + 0x40,0);
  FUN_1001a5fb4(param_1 + 0x2c);
  return;
}

