// name: caseD_0
// address: 1000207f0

void switchD_10001d28e::caseD_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  long unaff_RBX;
  long unaff_RBP;
  
  pcVar2 = *(code **)(unaff_RBP + -0x80);
  (*pcVar2)();
  iVar1 = *(int *)(unaff_RBX +
                  (long)(int)((int)*(undefined8 *)(unaff_RBP + -0xf8) + -0x2e3fe4a8 +
                             (uint)(*(long *)(unaff_RBP + -0x58) == 0)) * 4);
  *(undefined8 *)(unaff_RBP + -0x98) = *(undefined8 *)(unaff_RBP + -0xb8);
  *(undefined8 *)(unaff_RBP + -0xa8) = *(undefined8 *)(unaff_RBP + -0xd0);
                    /* WARNING: Could not recover jumptable at 0x000100020852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&caseD_1 + iVar1))
            (*(long *)(unaff_RBP + -0x58),param_2,pcVar2,*(undefined8 *)(unaff_RBP + -0x78),param_5,
             *(undefined4 *)(unaff_RBP + -0x70));
  return;
}

