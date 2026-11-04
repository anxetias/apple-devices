// name: caseD_0
// address: 100018362

void switchD_100015b8d::caseD_0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  long lVar1;
  long unaff_RBP;
  long unaff_R12;
  int unaff_R14D;
  uint uVar2;
  code *unaff_R15;
  
  uVar2 = unaff_R14D + 0x47efe557U & 0x1f;
  *in_RAX = 0;
  in_RAX[1] = 0x7261378736103bda;
  *(undefined4 *)(in_RAX + 2) = 0;
  *(undefined8 **)(unaff_RBP + -0x48) = in_RAX;
  *(code **)(unaff_RBP + -0x90) = unaff_R15;
  lVar1 = (*unaff_R15)(0x1000);
  **(long **)(unaff_RBP + -0x48) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0001000183ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(unaff_R12 + (ulong)(uVar2 + (lVar1 == 0)) * 4)))
            (&PTR__bootstrap_look_up_10082e9f0,param_2,
             (&PTR__bootstrap_look_up_10082e9f0)[uVar2 + 0x20],
             caseD_0 + *(int *)(unaff_R12 + (ulong)(uVar2 + (lVar1 == 0)) * 4));
  return;
}

