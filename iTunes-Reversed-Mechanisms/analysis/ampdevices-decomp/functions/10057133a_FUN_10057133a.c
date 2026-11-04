// name: FUN_10057133a
// address: 10057133a

undefined8 FUN_10057133a(long *param_1,undefined4 *param_2,long *param_3,uint *param_4)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_3 = 0;
  *param_4 = 0;
  local_78 = *(undefined8 *)(param_2 + 8);
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  local_88 = param_2[4];
  uStack_84 = param_2[5];
  uStack_80 = param_2[6];
  uStack_7c = param_2[7];
  uVar4 = 0;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1,0x6d646961,&local_98,0,&local_70);
  if (cVar1 == '\0') goto LAB_10057154e;
  local_78 = local_50;
  local_88 = local_60;
  uStack_84 = uStack_5c;
  uStack_80 = uStack_58;
  uStack_7c = uStack_54;
  local_98 = local_70;
  uStack_94 = uStack_6c;
  uStack_90 = uStack_68;
  uStack_8c = uStack_64;
  uVar4 = 0;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1,0x6d696e66,&local_98,0);
  if (cVar1 == '\0') goto LAB_10057154e;
  local_78 = local_50;
  local_88 = local_60;
  uStack_84 = uStack_5c;
  uStack_80 = uStack_58;
  uStack_7c = uStack_54;
  local_98 = local_70;
  uStack_94 = uStack_6c;
  uStack_90 = uStack_68;
  uStack_8c = uStack_64;
  uVar4 = 0;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1,0x7374626c,&local_98,0);
  if (cVar1 == '\0') goto LAB_10057154e;
  local_78 = local_50;
  local_88 = local_60;
  uStack_84 = uStack_5c;
  uStack_80 = uStack_58;
  uStack_7c = uStack_54;
  local_98 = local_70;
  uStack_94 = uStack_6c;
  uStack_90 = uStack_68;
  uStack_8c = uStack_64;
  uVar4 = 0;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1,0x73747364,&local_98,0);
  if (cVar1 == '\0') goto LAB_10057154e;
  lVar2 = (**(code **)(*param_1 + 0x70))(param_1,CONCAT44(uStack_6c,local_70));
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "sampleDescAtom != __null";
LAB_1005715a0:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    uVar3 = *(uint *)(lVar2 + 0xc);
    if ((int)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) < 1)
    {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = 
        "((SInt32)(UInt32) (__builtin_constant_p(sampleDescAtom->numEntries) ? ((__uint32_t)((((__uint32_t)(sampleDescAtom->numEntries) & 0xff000000U) >> 24) | (((__uint32_t)(sampleDescAtom->numEntries) & 0x00ff0000U) >> 8) | (((__uint32_t)(sampleDescAtom->numEntries) & 0x0000ff00U) << 8) | (((__uint32_t)(sampleDescAtom->numEntries) & 0x000000ffU) << 24))) : (__builtin_constant_p(sampleDescAtom->numEntries) ? ((__uint32_t)((((__uint32_t)(sampleDescAtom->numEntries) & 0xff000000U) >> 24) | (((__uint32_t)(sampleDescAtom->numEntries) & 0x00ff0000U) >> 8) | (((__uint32_t)(sampleDescAtom->numEntries) & 0x0000ff00U) << 8) | (((__uint32_t)(sampleDescAtom->numEntries) & 0x000000ffU) << 24))) : _OSSwapInt32(sampleDescAtom->numEntries)))) > 0"
        ;
        goto LAB_1005715a0;
      }
    }
    else {
      uVar3 = *(uint *)(lVar2 + 0x10);
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      if ((ulong)(long)(int)uVar3 <= CONCAT44(uStack_64,uStack_68) + 0x10U) {
        *param_3 = lVar2 + 0x10;
        *param_4 = uVar3;
        uVar4 = 1;
        goto LAB_10057154e;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = 
        "sampleDescSize <= currentAtomInfo.atomSize + __builtin_offsetof(SampleDescriptionAtom, sampleDescTable)"
        ;
        goto LAB_1005715a0;
      }
    }
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_10057154e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

