// name: FUN_10049eca2
// address: 10049eca2

int FUN_10049eca2(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 local_180;
  undefined1 local_178 [8];
  long *local_170;
  undefined4 local_168;
  long local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_178,0x140);
  local_180 = *(undefined8 *)(param_1 + 0x4e0);
  local_168 = *(undefined4 *)(param_1 + 0x1c);
  local_160 = param_1 + 0x20;
  local_158 = *param_2;
  uStack_154 = param_2[1];
  uStack_150 = param_2[2];
  uStack_14c = param_2[3];
  local_148 = param_2[4];
  uStack_144 = param_2[5];
  uStack_140 = param_2[6];
  uStack_13c = param_2[7];
  local_138 = param_2[8];
  uStack_134 = param_2[9];
  uStack_130 = param_2[10];
  uStack_12c = param_2[0xb];
  iVar3 = FUN_10043a8b3(*(undefined8 *)(param_1 + 0x4d8),0x73676374,&local_180);
  if (iVar3 == 0) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = local_128;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = local_120;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = local_118;
    }
  }
  if (local_170 != (long *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_170 + 0x10))(local_170);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

