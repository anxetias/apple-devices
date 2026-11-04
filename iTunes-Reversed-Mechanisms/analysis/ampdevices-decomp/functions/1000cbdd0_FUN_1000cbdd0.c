// name: FUN_1000cbdd0
// address: 1000cbdd0

void FUN_1000cbdd0(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_4c0;
  undefined1 *local_4b8;
  undefined8 local_4b0;
  undefined1 *local_4a8;
  undefined8 *local_4a0;
  code *local_498;
  long local_490;
  undefined1 local_488 [528];
  undefined1 local_278 [528];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  long local_48;
  int local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  iVar5 = (((uint)param_1 & 0x785e4c97) * -2 + (uint)param_1 + 0xf85e4c97 ^ 0x367d0b42) * 0x4516280f
  ;
  iVar2 = (int)param_1[1];
  iVar1 = iVar2 + iVar5;
  puVar3 = (undefined8 *)*param_1;
  local_68 = (undefined8 *)param_1[2];
  local_4a0 = (undefined8 *)param_1[3];
  local_490 = param_1[5];
  local_4c0 = 0x4192704316b237f8;
  local_4b8 = local_278;
  local_4b0 = 0x4192704316b237f8;
  local_4a8 = local_488;
  local_50 = puVar3[1];
  uVar4 = (uint)&local_68;
  local_60 = &local_4c0;
  local_40 = iVar1 + ((uVar4 & 0x2d425958) * -2 + uVar4 + 0x2d42595c ^ 0x21b2f23b) * -0x2b3eb91b + 1
  ;
  local_498 = (code *)((&PTR_DAT_10082ee00)[iVar2 + iVar5 + 0xa7] + -3);
  local_58 = puVar3;
  local_48 = local_490;
  (*local_498)(&local_68);
  local_60 = (undefined8 *)*puVar3;
  uVar4 = (uint)&local_68;
  local_58 = (undefined8 *)
             CONCAT44(local_58._4_4_,
                      ((uVar4 & 0x6bb26a88) * -2 + uVar4 + 0x6bb26a89 ^ 0xef053784) * 0xd90c139 ^
                      iVar2 + iVar5 + 3U);
  local_68 = &local_4b0;
  (*(code *)((&PTR_DAT_10082ee00)[iVar2 + 0x34 + iVar5] + -0xe))(&local_68);
  local_68 = local_4a0;
  local_60._0_4_ =
       ((uVar4 & 0x57d50280) * -2 + uVar4 + 0x57d50283 ^ 0x8e824de7) * 0x34a356b1 + iVar1 + -2;
  (*(code *)((&PTR_DAT_10082ee00)[iVar2 + 0xff + iVar5] + -0xb))(&local_68);
                    /* WARNING: Could not recover jumptable at 0x0001000cbfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006fb4e0 +
                           (long)(int)(iVar1 + (uint)(0x80000000 < local_60._4_4_ + 0x1d5693e0U)) *
                           4) + 0x1000cbfa8))();
  return;
}

