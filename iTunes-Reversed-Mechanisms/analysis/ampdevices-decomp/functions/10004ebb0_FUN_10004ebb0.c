// name: FUN_10004ebb0
// address: 10004ebb0

undefined8 FUN_10004ebb0(void)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long in_R8;
  long in_R9;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_d8 [136];
  undefined8 uStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined1 *puStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  switch(in_R9 == 0 || in_R8 == 0) {
  case false:
    iVar6 = (uint)(in_R9 != 0 && in_R8 != 0) * -0x6fe2d7c2;
    iVar7 = iVar6 + 0x6fe2d7cc;
    uVar5 = (uint)&uStack_50;
    uVar2 = (uVar5 & 0x6408af00) * -2 + uVar5 + 0xe408af03 ^ 0xdfe801ae;
    uVar3 = uVar2 * 0x22116dab;
    uStack_44 = uVar3 ^ 0x7b1aeb70;
    puStack_40 = (undefined1 *)CONCAT44(puStack_40._4_4_,uVar3 + 0x984301f);
    uStack_50 = (undefined1 *)CONCAT44(iVar6 + 0xb2d69428U ^ uVar3,uVar2 * -0x22116dab + 0x2b7d1cab)
    ;
    FUN_1000ac960(&uStack_50);
    iVar8 = uStack_48 + -0x3568dcb1;
    uStack_48 = ((uVar5 & 0x41b74d90) * -2 + uVar5 + 0xc1b74d94 ^ 0xcc3811cd) * 0x3df53769;
    uStack_50 = local_d8;
    uStack_44 = uStack_48 + 0xe86778cf;
    uStack_48 = uStack_48 ^ iVar6 + 0x6fe2d7caU;
    (*(code *)((&PTR_DAT_10082ee00)[iVar7] + -2))(&uStack_50);
    lVar4 = 0x3d8c459344aa9758;
    if (iVar8 < 0x188011cc) {
      lVar4 = 0x3d8c459344aa9757;
    }
    uStack_48 = (int)((ulong)(&stack0x7d0cf14a3d43f43b +
                             ((ulong)&uStack_50 & 0x7d0cf14a3d43f48b) * -2) ^ 0x26358180aa1f2e09) *
                0x295bb3 + iVar7 + -0x6d95cfd4;
    uStack_50 = (undefined1 *)
                (lVar4 + ((ulong)(&stack0x7d0cf14a3d43f43b +
                                 ((ulong)&uStack_50 & 0x7d0cf14a3d43f48b) * -2) ^ 0x26358180aa1f2e09
                         ) * -0x295bb3);
    puStack_40 = local_d8;
    FUN_1000a30e0(&uStack_50);
                    /* WARNING: Could not recover jumptable at 0x000100035f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(switchD_10004ec34::caseD_0 +
              (int)(&switchD_10004ec34::switchdataD_1006d6e20)
                   [(int)((uint)(uStack_44 == 0x3a3402de) + iVar7)]))
                      (switchD_10004ec34::caseD_0 +
                       (int)(&switchD_10004ec34::switchdataD_1006d6e20)
                            [(int)((uint)(uStack_44 == 0x3a3402de) + iVar7)],
                       (long)(int)(&switchD_10004ec34::switchdataD_1006d6e20)
                                  [(int)((uint)(uStack_44 == 0x3a3402de) + iVar7)],
                       uStack_44 == 0x3a3402de,0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5bd9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

