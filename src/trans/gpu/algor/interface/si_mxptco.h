INTERFACE
SUBROUTINE SI_MXPTCO(KM,KSMAX,KFLEV,KFLSUR,PF,PALPHA,PDENIM,&
 & PEPSI,PIN,POU) 
USE PARKIND1 ,ONLY : JPIM ,JPRB
INTEGER(KIND=JPIM),INTENT(IN) :: KM
INTEGER(KIND=JPIM),INTENT(IN) :: KSMAX
INTEGER(KIND=JPIM),INTENT(IN) :: KFLEV
INTEGER(KIND=JPIM),INTENT(IN) :: KFLSUR
REAL(KIND=JPRB) ,INTENT(IN) :: PF
REAL(KIND=JPRB) ,INTENT(IN) :: PALPHA(KM:KSMAX+1)
REAL(KIND=JPRB) ,INTENT(IN) :: PDENIM(KM:KSMAX+1)
REAL(KIND=JPRB) ,INTENT(IN) :: PEPSI(KM:KSMAX)
REAL(KIND=JPRB) ,INTENT(IN) :: PIN(KFLSUR,2,KM:KSMAX)
REAL(KIND=JPRB) ,INTENT(OUT) :: POU(KFLSUR,2,KM:KSMAX)
END SUBROUTINE SI_MXPTCO
END INTERFACE
