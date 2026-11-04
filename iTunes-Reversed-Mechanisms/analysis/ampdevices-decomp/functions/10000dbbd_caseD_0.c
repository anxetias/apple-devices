// name: caseD_0
// address: 10000dbbd

void switchD_100010fa9::caseD_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long unaff_RBP;
  
  uVar1 = *(uint *)(unaff_RBP + param_4 * 4);
  *(undefined8 *)(unaff_RBP + -0x188) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010000dbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_10000db80 + uVar1))
            (*(undefined8 *)(unaff_RBP + -0x50),param_2,&DAT_10000db80 + uVar1,0,0x3165f9b2);
  return;
}

