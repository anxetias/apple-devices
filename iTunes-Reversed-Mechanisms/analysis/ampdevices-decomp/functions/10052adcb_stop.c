// name: stop
// address: 10052adcb

/* Function Stack Size: 0x10 bytes */

void AMPDevicesAgentXPCServiceListener::stop(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_s_invalidate_10088c4e8;
  puVar1 = PTR__objc_msgSend_10082c770;
  (*(code *)PTR__objc_msgSend_10082c770)(DAT_1008bfca8,PTR_s_invalidate_10088c4e8);
  uVar4 = DAT_1008bfca8;
  puVar2 = PTR__objc_release_10082c7b0;
  DAT_1008bfca8 = 0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  uVar4 = DAT_1008bfca0;
  DAT_1008bfca0 = 0;
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar1)(DAT_1008bfcb8,puVar3);
  uVar4 = DAT_1008bfcb8;
  DAT_1008bfcb8 = 0;
  (*(code *)puVar2)(uVar4);
  uVar4 = DAT_1008bfcb0;
  DAT_1008bfcb0 = 0;
  (*(code *)puVar2)(uVar4);
                    /* WARNING: Subroutine does not return */
  __exit(0);
}

