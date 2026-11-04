// name: caseD_0
// address: 10000b03c

void switchD_10000c44d::caseD_0
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,long param_5)

{
  int in_EAX;
  char in_R10B;
  uint in_R11D;
  bool bVar1;
  
  bVar1 = param_3 < in_R11D;
  if ((bool)in_R10B != in_R11D < 0xd49945ea) {
    bVar1 = in_R11D < 0xd49945ea;
  }
                    /* WARNING: Could not recover jumptable at 0x00010000b07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)(&switchD_100005882::switchdataD_1006cfa50)[(int)((uint)bVar1 + in_EAX)] + param_5
            ))();
  return;
}

