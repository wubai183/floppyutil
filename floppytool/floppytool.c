 # i n c l u d e   < s t d i o . h >  
  
 / *  
S�ov�d�O\]�Qw�c�O���S֏ov�b@g	O�`o  
  
S�ep�  
 - a 	f>y:�ov�v�x�v�W�g,O�`o�N�S�b@g	v�e�N�O�`o  
 - b 	c[�_[�bGS:e�N�UJ�_Ř{N: 5 1 2[W��Y'\  
 - l 	c	c[�e�N�R�hN-�z^��O�k!Q�Qex�vؕ\P�  
 - o 	��Q�v��ovؕ\P�e�N�T  
 - f 	h<_Sc[�Ty�v��ovؕ\P�  
  
u(O��  
 f l o p p y t o o l   - a   m y . i m g  
 f l o p p y t o o l   - b   b o o t . b i n   - l   m y f i l e s l i s t . t x t   - o   m y . i m g  
 f l o p p y t o o l   - f   m y . i m g  
 * /  
  
 i n t   s h o w U s a g e ( ) ;  
  
 i n t   l i s t _ i m g _ i n f o ( c o n s t   c h a r *   i m g _ n a m e ) ;  
 i n t   c r e a t e _ i m g ( c o n s t   c h a r *   b o o t _ b i n ,   c o n s t   c h a r *   f i l e s _ l i s t _ f i l e ,   c o n s t   c h a r *   o u t _ i m g _ n a m e ) ;  
 i n t   f o r m a t _ i m g ( c o n s t   c h a r *   i n _ i m g _ n a m e ) ;  
  
 i n t   m a i n ( i n t   a r g c ,   c h a r   c o n s t   * a r g v [ ] )  
 {  
 	 c h a r *   o p t [ ]   =   {  
 	 	 " - a " ,  
 	 	 " - b " ,  
 	 	 " - l " ,  
 	 	 " - o " ,  
 	 	 " - f "  
 	 } ;  
  
 	 i f   (   a r g c   < =   1 )  
 	 	 r e t u r n   s h o w U s a g e ( ) ;  
  
 	 / / p r i n t f ( " a r g c : % d \ n " ,   a r g c ) ;  
 	 c o n s t   c h a r   *   b o o t _ b i n   =   N U L L ;  
 	 c o n s t   c h a r   *   f i l e s _ l i s t _ f i l e   =   N U L L ;  
 	 c o n s t   c h a r   *   o u t _ i m g _ n a m e   =   N U L L ;  
  
 	 f o r   ( i n t   i   =   1 ;   i   <   a r g c ;   + + i )  
 	 {  
 	 	 p r i n t f ( " % s \ n " ,   a r g v [ i ] ) ;  
  
 	 	 i f   (   s t r c m p ( a r g v [ i ] ,   " - a " )   = =   0   & &   (   i + 1   <   a r g c   )   )  
 	 	 {  
 	 	 	 r e t u r n   l i s t _ i m g _ i n f o (   a r g v [ i + 1 ]   ) ;  
 	 	 }  
 	 	 e l s e   i f   (   s t r c m p ( a r g v [ i ] ,   " - b " )   = =   0   & &   (   i + 1   <   a r g c   )   )  
 	 	 {  
 	 	 	 b o o t _ b i n   =   a r g v [ i + 1 ] ;  
 	 	 	 + + i ;  
 	 	 }  
 	 	 e l s e   i f   (   s t r c m p ( a r g v [ i ] ,   " - l " )   = =   0   & &   (   i + 1   <   a r g c   )   )  
 	 	 {  
 	 	 	 f i l e s _ l i s t _ f i l e   =   a r g v [ i + 1 ] ;  
 	 	 	 + + i ;  
 	 	 }  
 	 	 e l s e   i f   (   s t r c m p ( a r g v [ i ] ,   " - o " )   = =   0   & &   (   i + 1   <   a r g c   )   )  
 	 	 {  
 	 	 	 o u t _ i m g _ n a m e   =   a r g v [ i + 1 ] ;  
 	 	 	 + + i ;  
 	 	 }  
 	 	 e l s e   i f   (   s t r c m p ( a r g v [ i ] ,   " - f " )   = =   0   & &   (   i + 1   <   a r g c   )   )  
 	 	 {  
 	 	 	 r e t u r n   f o r m a t _ i m g (   a r g v [ i + 1 ]   ) ;  
 	 	 }  
 	 	 e l s e  
 	 	 {  
 	 	 	 s h o w E r r o r (   a r g v [ i ]   ) ;  
 	 	 	 / / p r i n t f ( "e�lՋ�R+v�S�ep� % s \ n " ,   a r g v [ i ] ) ;  
 	 	 	 r e t u r n   - 1 ;  
 	 	 }  
 	 }  
  
 	 i f   (   b o o t _ b i n   & &   f i l e s _ l i s t _ f i l e   & &   o u t _ i m g _ n a m e   )  
 	 {  
 	 	 r e t u r n   c r e a t e _ i m g ( b o o t _ b i n ,   f i l e s _ l i s t _ f i l e ,   o u t _ i m g _ n a m e ) ;  
 	 }  
  
  
 	 r e t u r n   0 ;  
 }  
 i n t   s h o w E r r o r ( c o n s t   c h a r   * o p t )  
 {  
 	 p r i n t f ( "S�ep���� % s \ n " ,   o p t ) ;  
 	 r e t u r n   - 1 ;  
 }  
  
 i n t   s h o w U s a g e ( )  
 {  
 	 p r i n t f (  
 	 	 " U s a g e : \ n "  
 	 	 " \ t f l o p p y t o o l   - a   m y . i m g \ n "  
 	 	 " \ t f l o p p y t o o l   - b   b o o t . b i n   - l   m y f i l e s l i s t . t x t   - o   m y . i m g \ n "  
 	 	 " \ t f l o p p y t o o l   - f   m y . i m g \ n " ) ;  
  
 	 r e t u r n   0 ;  
 }  
  
 i n t   l i s t _ i m g _ i n f o ( c o n s t   c h a r *   i m g _ n a m e )  
 {  
 	 p r i n t f ( " f l o p p y t o o l   - a   % s \ n " ,   i m g _ n a m e ) ;  
 	 r e t u r n   0 ;  
 }  
  
 i n t   c r e a t e _ i m g ( c o n s t   c h a r *   b o o t _ b i n ,   c o n s t   c h a r *   f i l e s _ l i s t _ f i l e ,   c o n s t   c h a r *   o u t _ i m g _ n a m e )  
 {  
 	 p r i n t f ( " f l o p p y t o o l   - b   % s   - l   % s   - o   % s \ n " ,   b o o t _ b i n ,   f i l e s _ l i s t _ f i l e ,   o u t _ i m g _ n a m e ) ;  
 	 / /��QHh�g�_[�e�N�f/T&[XW(�Y'\f/T&N: 5 1 2[W��  
 	 / /��S։�Q�Qev�e�N�R�h�O�k!Q�Qe F A Te�N�R�MS:0v�_US:N�S�epcnS:  
  
 	 r e t u r n   0 ;  
 }  
  
 i n t   f o r m a t _ i m g ( c o n s t   c h a r *   i n _ i m g _ n a m e )  
 {  
 	 p r i n t f ( " f l o p p y t o o l   - f   % s \ n " ,   i n _ i m g _ n a m e ) ;  
 	 r e t u r n   0 ;  
 }  
  
  
