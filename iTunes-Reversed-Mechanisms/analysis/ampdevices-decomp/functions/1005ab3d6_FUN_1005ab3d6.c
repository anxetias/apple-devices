// name: FUN_1005ab3d6
// address: 1005ab3d6

void FUN_1005ab3d6(ushort *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  long local_268;
  long local_260;
  long local_258;
  long local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined2 local_238 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_238[0] = 0;
  local_248 = param_2;
  uVar2 = FUN_1001e5b1d();
  FUN_1001c62d9(&local_258,0x10);
  FUN_1001c62d9(&local_268,0x10);
  lVar3 = FUN_1001737f8(uVar2);
  local_258 = 0;
  local_250 = lVar3;
  uVar4 = _CFCharacterSetGetPredefined(3);
  cVar1 = _CFStringFindCharacterFromSet(uVar2,uVar4,local_258,local_250,0,&local_268);
  if (cVar1 == '\0') {
    local_240 = 0;
  }
  else {
    uVar6 = 0;
    do {
      local_258 = local_260 + local_268;
      local_250 = lVar3 - local_258;
      FUN_1001c62d9(&local_268,0x10);
      uVar5 = _CFStringFindCharacterFromSet(uVar2,uVar4,local_258,local_250,0,&local_268);
      uVar6 = uVar6 + 1;
    } while ((char)uVar5 != '\0');
    local_240 = CONCAT71((int7)((ulong)uVar5 >> 8),3 < uVar6);
  }
  FUN_1001c62d9(&local_258,0x10);
  FUN_1001c62d9(&local_268,0x10);
  local_258 = 0;
  local_250 = FUN_1001737f8(uVar2);
  uVar4 = _CFCharacterSetGetPredefined(0xb);
  cVar1 = _CFStringFindCharacterFromSet(uVar2,uVar4,local_258,local_250,8,&local_268);
  FUN_1001e26e1(" ",local_238);
  FUN_1001e1890(param_1,local_238);
  FUN_1001e26e1(" ",local_238);
  uVar4 = local_248;
  if ((cVar1 != '\0' | (byte)local_240) == 1) {
    pcVar7 = ".";
    if (param_1[*param_1] == 0x29) {
      pcVar7 = ",";
    }
    if (param_1[*param_1] == 0x5d) {
      pcVar7 = ",";
    }
  }
  else {
    pcVar7 = ",";
  }
  FUN_1001e26e1(pcVar7,local_238);
  FUN_1001e26e1(" ",local_238);
  FUN_1001e1890(uVar4,local_238);
  FUN_1001e26e1(" ",local_238);
  FUN_1001e1c39(local_238,param_1);
  FUN_10017060f(uVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

