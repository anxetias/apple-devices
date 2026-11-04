// name: caseD_0
// address: 100020300

void switchD_100023ebf::caseD_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  int in_EAX;
  long unaff_RBP;
  
                    /* WARNING: Could not recover jumptable at 0x000100020322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(param_5 + (long)(int)((uint)**(byte **)(unaff_RBP + -0x238) + in_EAX) * 4)))
            (param_1,param_2,
             caseD_0 + *(int *)(param_5 +
                               (long)(int)((uint)**(byte **)(unaff_RBP + -0x238) + in_EAX) * 4));
  return;
}

