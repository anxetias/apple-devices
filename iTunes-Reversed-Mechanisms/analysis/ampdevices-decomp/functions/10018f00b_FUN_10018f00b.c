// name: FUN_10018f00b
// address: 10018f00b

undefined8 FUN_10018f00b(long param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  
  *(undefined4 *)(param_1 + 0x4d8) = 0xffffffff;
  *(code **)(param_1 + 0x440) = FUN_100190fa1;
  *(code **)(param_1 + 0x448) = FUN_100191071;
  *(code **)(param_1 + 0x450) = FUN_1001910be;
  *(code **)(param_1 + 0x458) = FUN_1001910e3;
  *(code **)(param_1 + 0x460) = FUN_100191129;
  *(code **)(param_1 + 0x468) = FUN_100191151;
  *(code **)(param_1 + 0x470) = FUN_1001911e1;
  *(code **)(param_1 + 0x478) = FUN_100191319;
  *(code **)(param_1 + 0x480) = FUN_1001913a3;
  *(code **)(param_1 + 0x488) = FUN_100191404;
  *(code **)(param_1 + 0x490) = FUN_100191492;
  *(code **)(param_1 + 0x498) = FUN_1001914f2;
  *(code **)(param_1 + 0x4a0) = FUN_1001915b4;
  *(code **)(param_1 + 0x4a8) = FUN_100191615;
  *(code **)(param_1 + 0x4b0) = FUN_1001916f7;
  *(code **)(param_1 + 0x4b8) = FUN_100191757;
  *(code **)(param_1 + 0x4d0) = FUN_10019177b;
  if (*(int *)(param_1 + 8) == 0x64617461) {
    uVar1 = *(uint *)(param_1 + 4);
    uVar6 = 2;
    if ((((~uVar1 & 3) != 0) && (uVar6 = 0, (uVar1 & 1) == 0)) && (uVar6 = 1, (uVar1 & 2) == 0)) {
      uVar6 = uVar1 >> 1 & 2;
    }
    uVar7 = uVar6 + 0x20;
    if ((uVar1 & 0x30) == 0) {
      uVar7 = uVar6;
    }
    uVar5 = 0;
    iVar3 = _open((char *)(param_1 + 0x31),uVar7);
    *(int *)(param_1 + 0x4d8) = iVar3;
    if (iVar3 < 0) {
      piVar4 = ___error();
      uVar5 = FUN_1001eb020(*piVar4);
      *(undefined4 *)(param_1 + 0x4d8) = 0xffffffff;
    }
    else if ((*(byte *)(param_1 + 5) & 8) != 0) {
      uVar5 = 0;
      _fcntl(iVar3,0x44,1);
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006936a2(uVar5);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  return uVar5;
}

