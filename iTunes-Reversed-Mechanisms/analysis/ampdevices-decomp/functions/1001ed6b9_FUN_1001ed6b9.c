// name: FUN_1001ed6b9
// address: 1001ed6b9

void FUN_1001ed6b9(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  local_18 = param_1;
  FUN_1001eed65(&local_18);
  if (param_2 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c4ea5(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = (*(code *)*param_2)(param_2[1]);
    *(undefined4 *)(param_2 + 3) = uVar2;
    if (param_2[2] == 0) {
      FUN_1001c64c1(param_2);
    }
    else {
      FUN_1001e8f15();
    }
  }
  return;
}

