// name: FUN_1001ce66f
// address: 1001ce66f

undefined8 FUN_1001ce66f(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 local_19c;
  undefined1 *local_198;
  int local_188;
  int local_184;
  undefined4 local_154 [2];
  undefined1 local_14c [8];
  int local_144;
  int local_140;
  char local_139;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar4 = param_4;
  if (param_4 == (undefined4 *)0x0) {
    puVar4 = local_154;
  }
  local_144 = param_3;
  local_140 = param_2;
  if (param_3 != 0) {
    _GetCurrentProcess(local_14c);
  }
  FUN_1001c62d9(&local_19c,0x48);
  puVar6 = local_154;
  if (param_4 != (undefined4 *)0x0) {
    puVar6 = param_4;
  }
  uVar5 = 0;
  puVar6[1] = 0;
  *puVar4 = 0;
  local_19c = 0x48;
  local_198 = local_138;
  sVar3 = _GetNextProcess(puVar4);
  iVar2 = local_140;
  iVar1 = local_144;
  if (sVar3 == 0) {
    do {
      sVar3 = _GetProcessInformation(puVar4,&local_19c);
      if (((sVar3 == 0) && (local_188 == param_1)) && (local_184 == iVar2)) {
        local_139 = '\0';
        if ((char)iVar1 != '\0') {
          sVar3 = _SameProcess(puVar4,local_14c,&local_139);
          if ((sVar3 == 0) && (local_139 != '\0')) goto LAB_1001ce76d;
        }
        uVar5 = 1;
        goto LAB_1001ce782;
      }
LAB_1001ce76d:
      sVar3 = _GetNextProcess(puVar4);
    } while (sVar3 == 0);
    uVar5 = 0;
  }
LAB_1001ce782:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

