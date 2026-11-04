// name: caseD_0
// address: 100013b68

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000100013b70) overlaps instruction at (ram,0x000100013b6f)
    */

void switchD_100010ec2::caseD_0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long in_RAX;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  piVar1 = (int *)(in_RAX + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  puVar4 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar3 = '\f';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  if (!SBORROW4(iVar2,1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

