// name: FUN_10019c3d3
// address: 10019c3d3

void FUN_10019c3d3(long param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 == (int *)0x0) || (*piVar1 != 0x68746463)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100699878(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_10019f28b(piVar1 + 0x18,piVar1 + 0x1a,param_1);
    piVar1[0x1c] = piVar1[0x1c] + -1;
    if (*(code **)(param_1 + 0x70) == (code *)0x0) {
      if (*(code **)(param_1 + 0x78) != (code *)0x0) {
        (**(code **)(param_1 + 0x78))
                  (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_2,
                   *(undefined8 *)(param_1 + 0x88));
      }
    }
    else {
      (**(code **)(param_1 + 0x70))(param_2,*(undefined8 *)(param_1 + 0x88));
    }
    FUN_10017060f(*(undefined8 *)(param_1 + 0x18));
    FUN_10017060f(*(undefined8 *)(param_1 + 0x28));
    FUN_10017060f(*(undefined8 *)(param_1 + 0x40));
    FUN_10017060f(*(undefined8 *)(param_1 + 0x48));
    FUN_1001c64c1(param_1);
    if (((char)piVar1[0x28] != '\0') && (piVar1[0x1c] == 0)) {
      FUN_1001e8f15(piVar1 + 0x1e);
      return;
    }
  }
  return;
}

