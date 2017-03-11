x = [0:0.01:1000];

%Plot 1 
y = exp(-2*x).*sin(10*x);

subplot(2,2,1)
plot(x,y), xlabel('x'),ylabel('exp(–1.5x)*sin(10x)'),axis([0 5 -1 1])


%Plot 2
y = exp(-2*x); 

subplot(2,2,3)
plot(x,y),xlabel('x'),ylabel('exp(–2x)'),axis([0 5 -1 1])

%Plot 3
y = sin(10*x);

subplot(2,2,4)
plot(x,y),xlabel('x'),ylabel('sin(10x)'),axis([0 5 -1 1])
