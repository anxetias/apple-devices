// name: registerClientName:withReply:
// address: 1003c111b

/* Function Stack Size: 0x20 bytes */

void AMPDevicesFrameworkConnection::registerClientName_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  DAT_10088f8f0 = DAT_10088f8f0 + 1;
  *(int *)(param_1 + 8) = DAT_10088f8f0;
                    /* WARNING: Could not recover jumptable at 0x0001003c113a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))(param_4,0);
  return;
}

